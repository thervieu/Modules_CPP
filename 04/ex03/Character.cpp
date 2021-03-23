#include "Character.hpp"

Character::Character(void)
{
	return ;
}

Character::Character(const std::string &name)
{
	this->_name = name;
	this->_index = 0;
	for (int i = 0; i < 4; i += 1)
	{
		this->_inventory[i] = NULL;
	}
	return ;
}

Character::Character(const Character &src)
{
	for (int i = 0; i < 4; i++)
	{
		delete this->_inventory[i];
	}
	this->_name = src._name;
	this->_index = src._index;
	for (int i = 0; i < 4; i++)
	{
		this->_inventory[i] = NULL;
		this->_inventory[i] = src._inventory[i]->clone();
	}
	return ;
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
	{
		delete this->_inventory[i];
	}
}

Character	&Character::operator= (const Character &rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 4; i++)
		{
			delete this->_inventory[i];
		}
		this->_name = rhs._name;
		this->_index = rhs._index;
		for (int i = 0; i < 4; i++)
		{
			this->_inventory[i] = NULL;
			this->_inventory[i] = rhs._inventory[i]->clone();
		}
	}
	return (*this);
}

const std::string	&Character::getName(void) const
{
	return (this->_name);
}

void	Character::equip(AMateria *m)
{
	if (this->_index < 3)
	{
		this->_inventory[this->_index] = m;
		this->_index++;
	}
	return ;
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
	{
		this->_inventory[idx] = NULL;
	}
	return ;
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < this->_index)
		if (this->_inventory[idx] != NULL)
			this->_inventory[idx]->use(target);
}

std::ostream &			operator<<(std::ostream &o, ICharacter const &i)
{
	o << "This is the character named " << i.getName() << std::endl;
	return o;
}
