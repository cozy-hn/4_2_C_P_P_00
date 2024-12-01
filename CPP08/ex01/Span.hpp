#pragma once

#include <set>
#include <algorithm>
#include <exception>
#include <iostream>
#include <limits>

class Span {
    private:
        unsigned int _n;

    public:
        std::multiset<int> _set;
        Span();
        Span(unsigned int n);
        Span(const Span &obj);
        ~Span();
        Span &operator=(const Span &obj);
        void addNumber(int number);
        void addNumbers(std::multiset<int>::iterator begin, std::multiset<int>::iterator end);
        unsigned int shortestSpan() const;
        unsigned int longestSpan() const;
};

