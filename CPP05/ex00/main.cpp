#include "Bureaucrat.hpp"
#include <iostream>

int main() {
    try {
        Bureaucrat bureaucrat1("John", 1);
        std::cout << bureaucrat1 << std::endl;
        bureaucrat1.incrementGrade();
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    try {
        Bureaucrat bureaucrat2("Doe", 150);
        std::cout << bureaucrat2 << std::endl;
        bureaucrat2.decrementGrade();
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    try {
        Bureaucrat bureaucrat3("Alice", 0);
        std::cout << bureaucrat3 << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    try {
        Bureaucrat bureaucrat4("Bob", 151);
        std::cout << bureaucrat4 << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    try {
        Bureaucrat bureaucrat5("Charlie", 75);
        std::cout << bureaucrat5 << std::endl;
        bureaucrat5.incrementGrade();
        std::cout << "After increment: " << bureaucrat5 << std::endl;
        bureaucrat5.decrementGrade();
        std::cout << "After decrement: " << bureaucrat5 << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}
