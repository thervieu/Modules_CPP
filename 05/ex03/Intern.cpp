#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::~Intern()
{
    return;
}

Form *createPP(std::string name)
{
    Form *f = new PresidentialPardonForm(name);
    return f;
}

Form *createRR(std::string name)
{
    Form *f = new RobotomyRequestForm(name);
    return f;
}

Form *createSC(std::string name)
{
    Form *f = new ShrubberyCreationForm(name);
    return f;
}

Intern::Intern()
{
    ch[0].req = "robotomy request";
    ch[1].req = "presidential pardon";
    ch[2].req = "shrubbery creation";
    ch[0].f = createRR;
    ch[1].f = createPP;
    ch[2].f = createSC;
    return;
}

Form * Intern::makeForm(std::string req, std::string name)
{
    int i;

    i = 0;
    while(i < 3)
    {
        if (ch[i].req == req) {
            std::cout << "Intern create " << name << std::endl;
            return ch[i].f(name);
        }
            i++;
    }
    std::cout << "Wrong request !" << std::endl;
    return 0;
}