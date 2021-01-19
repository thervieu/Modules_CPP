#include "Bureaucrat.hpp"

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
        std::cout << b << std::endl;
        b.upgrade(58);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}