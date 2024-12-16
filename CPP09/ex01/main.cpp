#include "RPN.hpp"

int main(int argc, char **argv) {
    std::string token;

    if (argc != 2) {
        std::cerr << "Error" << std::endl;
        std::exit(1);
    }

    RPN& rpn = RPN::getInstance();

    try {
        std::istringstream iss(argv[1]);
        while (iss >> token)
            rpn.push(token);
        std::cout << rpn.getResult() << std::endl;
    }
    catch (const std::string& e) {
        std::cerr << e << std::endl;
        std::exit(1);
    }
    RPN::destroyInstance();
    std::exit(0);
}