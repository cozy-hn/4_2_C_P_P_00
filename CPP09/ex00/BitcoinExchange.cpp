#include "BitcoinExchange.hpp"

BitcoinExchange* BitcoinExchange::_instance = 0;

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other) { (void)other; }

BitcoinExchange& BitcoinExchange::operator=(const BitcoinExchange& other) { (void)other; return *this; }

BitcoinExchange& BitcoinExchange::getInstance() {
    if (_instance == 0)
        _instance = new BitcoinExchange();
    return *_instance;
}

void BitcoinExchange::destroyInstance() {
    if (_instance) {
        delete _instance;
        _instance = 0;
    }
}

int BitcoinExchange::initDatabase(const std::string& filename) {
    _database.clear();
    std::ifstream file(filename.c_str());
    std::string line, value;
    std::time_t date;

    if (!file.is_open())
        return 1;
    std::getline(file, line); // skip first line - header
    while (std::getline(file, line)) {
        if (line.length() < 11 || line[10] != ',')
            return 1;
        date = makeTime_t(line.substr(0, 10));
        value = line.substr(11);
        if (date == 0 || value.empty())
            return 1;
        _database[date] = std::atof(value.c_str());
    }
    _minTime = _database.begin()->first;
    _maxTime = _database.rbegin()->first;
    return 0;
}

std::time_t BitcoinExchange::makeTime_t(const std::string& dateStr) {
    std::istringstream iss(dateStr);
    std::tm date = {}, origin = {};
    char delim1, delim2;
    
    iss >> origin.tm_year >> delim1 >> origin.tm_mon >> delim2 >> origin.tm_mday;
    if (iss.fail() || delim1 != '-' || delim2 != '-' || origin.tm_year < 1900)
        return 0;
    origin.tm_year -= 1900;
    origin.tm_mon -= 1;
    origin.tm_hour = 0;
    origin.tm_min = 0;
    origin.tm_sec = 0;
    date = origin;
    std::time_t tempTime = std::mktime(&origin);
    if (tempTime == -1)
        return 0;
    std::tm* validTime = std::localtime(&tempTime);
    if (!validTime || !(validTime->tm_year == date.tm_year && validTime->tm_mon == date.tm_mon && validTime->tm_mday == date.tm_mday))
        return 0;
    return tempTime;
}

std::string BitcoinExchange::calPrice(const std::string& dateStr, const std::string& amountStr) {
    double amount = std::atof(amountStr.c_str());
    
    if (amount < 0)
        return "Error: not a positive number.";
    if (amount > 1000000000)
        return "Error: too large a number.";
    
    std::time_t date_t = makeTime_t(dateStr);
    if (date_t == 0 || date_t < _minTime || date_t > _maxTime)
        return "Error: bad input => " + dateStr;
    
    std::map<std::time_t, double>::iterator it = _database.upper_bound(date_t);
    if (it != _database.begin())
        --it;
    std::cout << dateStr << " => " << amount << " = " << _database[it->first] * amount << std::endl;
    return "";
}