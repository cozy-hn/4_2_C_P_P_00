
#include "Span.hpp"
#include <iostream>

int main() {
	// Span sp = Span(5);
	// sp.addNumber(6);
	// sp.addNumber(3);
	// sp.addNumber(17);
	// sp.addNumber(9);
	// sp.addNumber(11);
	// std::cout << sp.shortestSpan() << std::endl;
	// std::cout << sp.longestSpan() << std::endl;
	// return 0;

	Span sp = Span(100000);
	std::multiset<int> randomSet;
	srand(time(NULL));
	for (int i = 0; i < 50000; i++) {
		randomSet.insert(rand() % 100);
	}

	std::multiset<int>::iterator it = randomSet.begin();
	sp.addNumbers(it, randomSet.end());

	for (int i = 0; i < 49999; i++) {
		randomSet.insert(rand() % 10000);
	}
	std::advance(it, 50000);
	sp.addNumbers(it, randomSet.end());

	sp.addNumber(50);


	try {
		sp.addNumber(0);
	} catch (const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	try {
		sp.addNumbers(randomSet.begin(), randomSet.end());
	} catch (const std::exception& e) {
		std::cerr << e.what() << '\n';
	}

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
	return 0;
}