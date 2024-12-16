#include "RPN.hpp"

RPN* RPN::_instance = 0;

RPN::RPN() {}

RPN::~RPN() {}

RPN::RPN(const RPN& other) {(void)other;}

RPN& RPN::operator=(const RPN& other) {(void)other; return *this;}

RPN& RPN::getInstance() {
    if (_instance == 0)
        _instance = new RPN();
    return *_instance;
}

void RPN::destroyInstance() {
    if (_instance) {
        delete _instance;
        _instance = 0;
    }
}

void RPN::push(const std::string& token) {
    int a, b;

    if (token.length() != 1)
        throw std::string("Error");
    
    if (token[0] >= '0' && token[0] <= '9')
        _stack.push_back(token[0] - '0');
    else if (token[0] == '+' || token[0] == '-' || token[0] == '*' || token[0] == '/') {
        if (_stack.size() < 2)
            throw std::string("Error");
        a = _stack.back();
        _stack.pop_back();
        b = _stack.back();
        _stack.pop_back();
        switch (token[0]) {
            case '+': _stack.push_back(b + a); break;
            case '-': _stack.push_back(b - a); break;
            case '*': _stack.push_back(b * a); break;
            case '/': 
                if (a == 0)
                    throw std::string("Error");
                _stack.push_back(b / a);
                break;
            default:
                throw std::string("Error");
        }
    }
    else
        throw std::string("Error");
}

int RPN::getResult() {
    if (_stack.size() != 1)
        throw std::string("Error");
    return _stack.back();
}