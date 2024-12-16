#pragma once

#include <deque>
#include <string>
#include <iostream>
#include <sstream>
#include <cstdlib>

class RPN {
    public:
        static RPN& getInstance();
        static void destroyInstance();
        void push(const std::string& token);
        int getResult();

    private:
        RPN();
        ~RPN();
        RPN(const RPN& other);
        RPN& operator=(const RPN& other);

        static RPN* _instance;
        std::deque<int> _stack;
};