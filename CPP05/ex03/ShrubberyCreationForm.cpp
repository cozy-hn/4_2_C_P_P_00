#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShrubberyCreationForm", target, 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other) : AForm(other) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other) {
    if (this != &other) {
        this->~ShrubberyCreationForm();
        new (this) ShrubberyCreationForm(other);
    }
    return *this;
}

void ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
    if (!getIsSigned()) throw AForm::FormNotSignedException();
    if (executor.getGrade() > getGradeToExecute()) throw AForm::GradeTooLowException();
    std::ofstream file(getTarget() + "_shrubbery");
    if (!file.is_open()) throw AForm::FileOpenException();
    file << "               ,@@@@@@@," << std::endl;
    file << "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
    file << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
    file << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
    file << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
    file << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
    file << "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
    file << "       |o|        | |         | |" << std::endl;
    file << "       |.|        | |         | |" << std::endl;
    file << "    \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_ " << std::endl;
    file << "   ~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
    file << "   ~~~  ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~" << std::endl;
    file << "   ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~" << std::endl;
    file << "       (\\__/)" << std::endl;
    file << "       (='.'=)" << std::endl;
    file << "       (\")_(\")" << std::endl;
    file.close();
}
