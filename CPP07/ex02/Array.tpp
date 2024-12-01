#include "Array.hpp"

template <typename T>
Array<T>::Array() : _array(0), _size(0) {}

template <typename T>
Array<T>::Array(unsigned int n) : _array(n > 0 ? new T[n] : 0), _size(n) {}

template <typename T>
Array<T>::Array(const Array& obj) : _array(obj._size > 0 ? new T[obj._size] : 0), _size(obj._size) {
    for (unsigned int i = 0; i < _size; ++i) {
        _array[i] = obj._array[i];
    }
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& obj) {
    if (this != &obj) {
        delete[] _array;
        _array = obj._size > 0 ? new T[obj._size] : 0;
        _size = obj._size;
        for (unsigned int i = 0; i < _size; ++i) {
            _array[i] = obj._array[i];
        }
    }
    return *this;
}

template <typename T>
Array<T>::~Array() {
    delete[] _array;
}

template <typename T>
T& Array<T>::operator[](unsigned int index) {
    if (index >= _size) throw std::exception();
    return _array[index];
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const {
    if (index >= _size) throw std::exception();
    return _array[index];
}

template <typename T>
unsigned int Array<T>::size() const {
    return _size;
}