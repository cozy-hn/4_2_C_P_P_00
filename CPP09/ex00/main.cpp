#include "BitcoinExchange.hpp"

int pintError(const std::string& error) {
	std::cerr << error << std::endl;
	return 1;
}

int main(int argc, char** argv) {
	std::ifstream file(argv[1]);
	std::istringstream stream;
	std::string line, left, delimiter, right, error;

	if (argc != 2 && !file.is_open())
		return pintError("Error: could not open file.");

    std::getline(file, line);
    stream.str(line);
    stream.clear();
    if (!(stream >> left && left == "date" && stream >> delimiter &&
            delimiter == "|" && stream >> right && right == "value" &&
            !(stream >> right)))
        return pintError("Error: could not open file.");

	BitcoinExchange& exchange = BitcoinExchange::getInstance();
	exchange.initDatabase("data.csv");

	while (std::getline(file, line)) {
		stream.str(line);
		stream.clear();

		if (!(stream >> left && stream >> delimiter && delimiter == "|" &&
			  stream >> right && !(stream >> right))) {
			pintError("Error: bad input => " + line);
			continue;
		}

		error = exchange.calPrice(left, right);
		if (!error.empty())
			pintError(error);
	}

	BitcoinExchange::destroyInstance();
	return 0;
}