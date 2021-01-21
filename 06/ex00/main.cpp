#include <iostream>
#include <stdexcept>

#include "Convert.h"
#include "ScalarConversion.hpp"

int		main(int argc, char *argv[])
{
    double              value;
    int                 precision;
    ScalarConversion    scalar;

    for (int i = 1; i < argc; i += 1)
    {
        std::cout << "string to convert : " << argv[i] << std::endl << std::endl;
        precision = getPrecision(argv[i]);
        value = atof(argv[i]);
        checkChar(scalar, value);
        checkInt(scalar, value);
        checkFloat(scalar, value, precision);
        checkDouble(scalar, value, precision);
        std::cout << std::endl;
    }
    return (0);
}