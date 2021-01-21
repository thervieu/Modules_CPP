#ifndef C_HPP
# define C_HPP

# include "Base.hpp"

class C: public Base
{
	public:
		C(void);
		C(const C&);
		virtual ~C();

		C	&operator=(const C&);
};

#endif
