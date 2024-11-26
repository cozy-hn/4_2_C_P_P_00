#pragma once

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {
    private:
        class NotFoundFormException : public std::exception {
            public:
                virtual const char *what() const throw();
        };

    public:
        Intern();
        Intern(const Intern &other);
        ~Intern();
        Intern &operator=(const Intern &other);
        AForm *makeForm(const std::string &formName, const std::string &target);
        static AForm *createPresidentialPardonForm(const std::string &target);
        static AForm *createRobotomyRequestForm(const std::string &target);
        static AForm *createShrubberyCreationForm(const std::string &target);
        static AForm *makeException(const std::string &target);
};
