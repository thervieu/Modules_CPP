#ifndef SCALARCONVERSION_HPP
# define SCALARCONVERSION_HPP

# include <cmath>
# include <string>
# include <iomanip>
# include <cstring>
# include <climits>
# include <iostream>

class ScalarConversion
{
	public:

		class NonDisplayable : public std::exception
		{
			public:

				NonDisplayable(void);
				NonDisplayable(NonDisplayable const &src);
				virtual ~NonDisplayable(void) throw();

				NonDisplayable          &operator= (const NonDisplayable &rhs);

				const char              *what(void) const throw();
		};

		class Impossible : public std::exception
		{
		public:

			Impossible(void);
			Impossible(Impossible const &src);
			virtual ~Impossible(void) throw();

			Impossible              &operator= (const Impossible &rhs);

			const char              *what(void) const throw();
		};

		ScalarConversion(void);
		ScalarConversion(const ScalarConversion &src);
		~ScalarConversion(void);

		ScalarConversion                &operator= (const ScalarConversion &rhs);

		static int                      getPrecision(char *str);

		static char                     convertToChar(double d);
		static int                      convertToInt(double d);
		static double                   convertToDouble(double d);
		static float                    convertToFloat(double d);
};

#endif