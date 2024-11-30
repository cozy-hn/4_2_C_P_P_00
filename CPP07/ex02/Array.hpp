#pragma once

#include <cstdlib>
#include <exception>
template <typename T>
class Array {
    private:
        T* _array;
        unsigned int _size;
    public:
        Array();
        Array(unsigned int n);
        Array(Array const &obj);
        ~Array();
        Array& operator=(Array const &obj);
        T& operator[](unsigned int idx);
        const T& operator[](unsigned int idx) const;
        unsigned int size() const;
};

#include "Array.tpp"