#include "Bureaucrat.hpp"
#include "Form.hpp"
#include <cstdlib>
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main()
{
    srand(time(0));
    try {
        Intern i;
        Bureaucrat b("JHON", 12);
        Form * rr = i.makeForm("robotomy request", "BOBOB");
        rr->execute(b);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl << std::endl;

    try {
        Intern i;
        Bureaucrat b("JHON", 12);
        Form * rr = i.makeForm("robotodwqmy request", "BOBOB");
        (void)rr;
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl << std::endl;

    return 0;
}