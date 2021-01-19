#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
    try {
        Bureaucrat b("Bobby", -56);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl << std::endl;

    try {
        Bureaucrat b("Bobby", 956);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl << std::endl;

    try {
        Bureaucrat b("Bobby", 148);
        b.downgrade(58);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl << std::endl;

    try {
        Bureaucrat b("Bobby", 2);
        b.upgrade(58);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl << std::endl;

    try {
        Form f("Form", -2, 50);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl << std::endl;

    try {
        Form f("Form", 2, 500);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    try {
        Form f("Form", 100, 100);
        Bureaucrat b("Bob", 120);
        b.signForm(f);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }
    try {
        Form f("Form", 100, 100);
        Bureaucrat b("Bob", 42);
        b.signForm(f);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}