#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : SuperMutant::Enemy("SuperMutant", 80)
{
    std::cout << "* click click click *" << std::endl;
    return ;
}

SuperMutant::SuperMutant(const SuperMutant &src)
{
    *this = src;
    return ;
}

SuperMutant::~SuperMutant(void)
{
    std::cout << "* SPROTCH *" << std::endl;
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