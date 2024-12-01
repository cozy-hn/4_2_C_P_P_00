#include "Span.hpp"

Span::Span() : _n(0) {}

Span::Span(unsigned int n) : _n(n) {}

Span::Span(const Span &obj) : _n(obj._n), _set(obj._set) {}

Span::~Span() {}

Span &Span::operator=(const Span &obj) {
    if (this != &obj) {
        _n = obj._n;
        _set = obj._set;
    }
    return *this;
}

void Span::addNumber(int number) {
    if (_set.size() >= _n) {
        throw std::out_of_range("Span is full");
    }
    _set.insert(number);
}

void Span::addNumbers(std::multiset<int>::iterator begin, std::multiset<int>::iterator end) {
    if (_set.size() + std::distance(begin, end) > _n) {
        throw std::out_of_range("Span is full");
    }
    _set.insert(begin, end);
}

unsigned int Span::shortestSpan() const {
    if (_set.size() < 2) {
        throw std::out_of_range("Span is too short");
    }
    std::multiset<int>::iterator it = _set.begin();
    unsigned int shortest = *std::next(it) - *it;
    for (std::multiset<int>::iterator it = _set.begin(); it != _set.end(); ++it) {
        if (it != _set.begin()) {
            std::multiset<int>::iterator prev_it = it;
            --prev_it;
            shortest = std::min(shortest, static_cast<unsigned int>(*it - *prev_it));
        }
    }
    return shortest;
}

unsigned int Span::longestSpan() const {
    if (_set.size() < 2) {
        throw std::out_of_range("Span is too short");
    }
    std::multiset<int>::iterator last = _set.end();
    --last;
    return *last - *_set.begin();
}