#pragma once

template <typename T> void iter(T *array, int length, void (*f)(T&)) {
    for (int i = 0; i < length; i++) {
        f(array[i]);
    }
}

template <typename T> void iter(const T *array, int length, void (*f)(const T&)) {
    for (int i = 0; i < length; i++) {
        f(array[i]);
    }
}

template <typename T> void pprint(T& value) {
    std::cout << value << std::endl;
}

template <typename T> void pprint(const T& value) {
    std::cout << value << std::endl;
}
