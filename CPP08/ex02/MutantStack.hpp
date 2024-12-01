#pragma once

#include <deque>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T> {
    public:
        MutantStack();
        MutantStack(const MutantStack &obj);
        virtual ~MutantStack();
        MutantStack &operator=(const MutantStack &obj);
        typedef typename std::deque<T>::iterator iterator;
        iterator begin();
        iterator end();
        const iterator begin() const;
        const iterator end() const;
};

#include "MutantStack.tpp"
