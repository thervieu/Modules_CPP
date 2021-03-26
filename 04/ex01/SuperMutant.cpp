#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "SuperMutant")
{
	std::cout << "Gaaah. Break everything !" << std::endl;
	return ;
}

SuperMutant::SuperMutant(const SuperMutant &src)
{
	*this = src;
	return ;
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh ..." << std::endl;
	return ;
}

SuperMutant	&SuperMutant::operator= (const SuperMutant &rhs)
{
	if (this != &rhs)
	{
		this->_hp = rhs._hp;
		this->_type = rhs._type;
	}
	return (*this);
}

void    SuperMutant::takeDamage(int damage)
{
	if (_hp - (damage - 3) <= 0 && damage - 3 > 0)
    {
        _hp = 0;
    }
    else if (damage - 3 > 0)
    {
        _hp -= (damage - 3);
    }
    return ;
}
