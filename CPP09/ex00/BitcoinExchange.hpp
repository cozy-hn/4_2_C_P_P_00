#pragma once

#include <ctime>
#include <fstream>
#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <cstdlib>

class BitcoinExchange {
    public:
        static BitcoinExchange& getInstance();
        static void destroyInstance();
        int initDatabase(const std::string& filename);
        std::string calPrice(const std::string& date, const std::string& amount);

    private:
        BitcoinExchange();
        ~BitcoinExchange();
        BitcoinExchange(const BitcoinExchange& other);
        BitcoinExchange& operator=(const BitcoinExchange& other);
        static std::time_t makeTime_t(const std::string& date);
        static BitcoinExchange* _instance;

        std::map<std::time_t, double> _database;
        std::time_t _minTime, _maxTime;
};