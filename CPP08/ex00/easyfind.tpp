#include "easyfind.hpp"

template <typename T>
int easyfind(T &container, int value) {
    typename T::iterator it = std::find(container.begin(), container.end(), value);
    if (it == container.end())
        throw std::exception();
    return std::distance(container.begin(), it);
}