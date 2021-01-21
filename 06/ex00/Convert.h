#ifndef CONVERT_H
# define CONVERT_H

# include "ScalarConversion.hpp"

int          getPrecision(char *str);

void         checkChar(ScalarConversion scalar, double value);
void         checkInt(ScalarConversion scalar, double value);
void         checkDouble(ScalarConversion scalar, double value, int precision);
void         checkFloat(ScalarConversion scalar, double value, int precision);


#endif