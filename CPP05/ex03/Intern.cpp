#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &other) {
    static_cast<void>(other);
}

Intern::~Intern() {}

Intern &Intern::operator=(const Intern &other) {
    static_cast<void>(other);
    return *this;
}

AForm *Intern::makeForm(const std::string &formName, const std::string &target) {
    static AForm *(*formFunctions[4])(const std::string &target) = {
        &Intern::createPresidentialPardonForm,
        &Intern::createRobotomyRequestForm,
        &Intern::createShrubberyCreationForm,
        &Intern::makeException
    };
    static std::string formNames[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};

    for (int i = 0; i < 3; i++) {
        if (formName == formNames[i]) {
            std::cout << "Intern creates " << formNames[i] << std::endl;
            return formFunctions[i](target);
        }
    }
    throw NotFoundFormException();
}

const char *Intern::NotFoundFormException::what() const throw() {
    return "Intern cannot create form";
}


AForm *Intern::createPresidentialPardonForm(const std::string &target) {
    return new PresidentialPardonForm(target);
}

AForm *Intern::createRobotomyRequestForm(const std::string &target) {
    return new RobotomyRequestForm(target);
}

AForm *Intern::createShrubberyCreationForm(const std::string &target) {
    return new ShrubberyCreationForm(target);
}

AForm *Intern::makeException(const std::string &target) {
    static_cast<void>(target);
    throw NotFoundFormException();
}