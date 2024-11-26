#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() : name("Default"), grade(150) {}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade) {
    if (grade < 1) throw Bureaucrat::GradeTooHighException();
    if (grade > 150) throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name(other.name), grade(other.grade) {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
    if (this != &other) {
        this->~Bureaucrat();
        new (this) Bureaucrat(other);
    }
    return *this;
}

const std::string Bureaucrat::getName() const {
    return name;
}

int Bureaucrat::getGrade() const {
    return grade;
}

void Bureaucrat::incrementGrade() {
    if (grade == 1) throw Bureaucrat::GradeTooHighException();
    grade--;
}

void Bureaucrat::decrementGrade() {
    if (grade == 150) throw Bureaucrat::GradeTooLowException();
    grade++;
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& bureaucrat) {
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
    return os;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade is greater than 1.";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade is less than 150.";
}

void Bureaucrat::signForm(AForm &form) {
    try {
        form.beSigned(*this);
        std::cout << name << " signed " << form.getName() << std::endl;
    } catch (const std::exception &e) {
        std::cerr << name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
        throw;
    }
}

void Bureaucrat::executeForm(const AForm &form) {
    try {
        form.execute(*this);
        std::cout << name << " executed " << form.getName() << std::endl;
    } catch (const std::exception &e) {
        std::cerr << name << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
        throw;
    }
}