#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	this->_n_index = 0;
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
	}
	return ;
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	*this = src;
	return ;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < _n_index; i++)
	{
		if (this->_inventory[i])
			delete this->_inventory[i];
	}
}

MateriaSource   &MateriaSource::operator= (const MateriaSource &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < _n_index; i++)
		{
			delete this->_inventory[i];
		}
		for (int i = 0; i < 4; i++)
		{
			this->_inventory[i] = NULL;
			this->_inventory[i] = rhs._inventory[0]->clone();
		}
		this->_n_index = rhs._n_index;
	}
	return (*this);
}

void    MateriaSource::learnMateria(AMateria *m)
{
	if (this->_n_index < 3)
	{
		this->_inventory[this->_n_index] = m;
		this->_n_index += 1;
	}
}

AMateria    *MateriaSource::createMateria(const std::string &type)
{
	if (type == "ice")
		return (new Ice());
	else if (type == "cure")
		return (new Cure());
	return (NULL);
}

std::ostream &		operator<<(std::ostream &o, IMateriaSource const &i)
{
	(void)i;
	o << "This is a MateriaSource" << std::endl;
	return o;
}
