#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include <cstdlib>
# include <iostream>

# include "ICharacter.hpp"

class AMateria
{
	public:
		AMateria(void);
		AMateria(const std::string &type);
		AMateria(const AMateria &src);
		virtual             ~AMateria(void);

		AMateria &operator= (const AMateria &rhs);

		virtual AMateria    *clone(void) const = 0;
		virtual void        use(ICharacter &target);

		std::string const	&getType(void) const;
		unsigned int        getXP(void) const;

	protected:

		unsigned int        _xp;
		std::string         _type;
};

std::ostream &			operator<<(std::ostream &o, AMateria const &i);

#endif
