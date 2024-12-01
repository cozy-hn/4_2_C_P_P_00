#include "easyfind.hpp"
#include <deque>
#include <iostream>
#include <list>
#include <vector>

int main() {
	std::vector<int> v(5, 0);

	for (int i = 0; i < 5; i++)
		v[i] = i;

	try {
		std::cout << easyfind(v, -2) << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << easyfind(v, 0) << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << easyfind(v, 3) << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << easyfind(v, 6) << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::list<int> l;
	for (int i = 0; i < 5; i++)
		l.push_back(i);

	try {
		std::cout << easyfind(l, -2) << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << easyfind(l, 0) << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << easyfind(l, 3) << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << easyfind(l, 6) << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::deque<int> d;
	for (int i = 0; i < 5; i++)
		d.push_back(i);

	try {
		std::cout << easyfind(d, -2) << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << easyfind(d, 0) << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << easyfind(d, 3) << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << easyfind(d, 6) << std::endl;
	} catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
}