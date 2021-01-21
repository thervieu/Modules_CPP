#include "Convert.h"
#include <string>

void	checkChar(ScalarConversion scalar, double value)
{
    try
    {
        std::cout << "char   : ";
		char c = scalar.convertToChar(value);
        std::cout << "'" << c << "'" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void	checkInt(ScalarConversion scalar, double value)
{
    try
    {
        std::cout << "int    : ";
        std::cout << scalar.convertToInt(value) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void	checkDouble(ScalarConversion scalar, double value, int precision)
{
    try
    {
        std::cout << "double : ";
        std::cout << std::setprecision(precision) \
        << std::fixed << scalar.convertToDouble(value) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void	checkFloat(ScalarConversion scalar, double value, int precision)
{
    try
    {
        std::cout << "float  : ";
        std::cout << std::setprecision(precision) \
        << std::fixed << scalar.convertToFloat(value) << "f" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

#include <cctype>
#include <cstring>

int		getPrecision(char *str)
{
    unsigned int     before;
    unsigned int     after;

    before = 0;
    while (str[before] && str[before] != '.')
    {
        before += 1;
    }
    after = before + 1;
    while (str[after] && isdigit(str[after]))
    {
        after += 1;
    }
    after -= before;
    return ((strlen(str) == before || after == 1) ? 1 : after - 1);
}
