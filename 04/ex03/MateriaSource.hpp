#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>

# include "Ice.hpp"
# include "Cure.hpp"
# include "AMateria.hpp"
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource(void);
		MateriaSource(const MateriaSource &src);
		virtual	~MateriaSource(void);

		MateriaSource       &operator= (const MateriaSource &rhs);

		virtual void        learnMateria(AMateria *m);
		virtual AMateria    *createMateria(const std::string &type);

	private:
		AMateria            *_inventory[4];
		int                 _index;
};

std::ostream &			operator<<(std::ostream & o, IMateriaSource const & i);

#endif