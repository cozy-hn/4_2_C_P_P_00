#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <iostream>

int main() {
    try {
        Bureaucrat b1("Alice", 1);
        Bureaucrat b2("Bob", 150);
        Bureaucrat b3("Charlie", 75);

        std::cout << b1 << std::endl;
        std::cout << b2 << std::endl;
        std::cout << b3 << std::endl;

        b1.incrementGrade(); // Should throw GradeTooHighException
    } catch (const std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    try {
        Bureaucrat b4("Dave", 0); // Should throw GradeTooHighException
    } catch (const std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    try {
        Bureaucrat b5("Eve", 151); // Should throw GradeTooLowException
    } catch (const std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    try {
        Form f1("Form1", 50, 100);

        std::cout << f1 << std::endl;

        Bureaucrat b6("Frank", 40);
        b6.signForm(f1); // Should succeed
        std::cout << f1 << std::endl;

        Bureaucrat b7("Grace", 40);
        b7.signForm(f1); // Should throw FormAlreadySignedException
    } catch (const std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    try {
        Bureaucrat b8("Hank", 150);
        Form f2("Form2", 100, 100);
        b8.signForm(f2); // Should throw GradeTooLowException
    } catch (const std::exception &e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }


    return 0;
}
