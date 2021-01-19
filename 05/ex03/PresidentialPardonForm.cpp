#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string name) : Form(name, 25, 5) {
    return;
}

PresidentialPardonForm::~PresidentialPardonForm() {
    return;
}

void PresidentialPardonForm::execute(const Bureaucrat &executor) const {
    Form::execute(executor);
    std::cout << executor.getName() << " has been pardonned by Zafod Beeblebrox" << std::endl;
    return;
}
