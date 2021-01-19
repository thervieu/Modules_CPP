#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::~RobotomyRequestForm() {
    return;
}

RobotomyRequestForm::RobotomyRequestForm(std::string name) : Form(name, 72, 45) {
    return;
}

void RobotomyRequestForm::execute(const Bureaucrat &executor) const {
    Form::execute(executor);
    std::cout << "drilling noise ..." << std::endl;
    if (rand() % 2 == 0)
        std::cout << "FAILURE on " << executor.getName() << " !" << std::endl;
    else
        std::cout << "SUCCESS on " << executor.getName() << " !" << std::endl;
    return;
}