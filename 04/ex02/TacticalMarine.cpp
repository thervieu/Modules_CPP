#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void)
{
    std::cout << "Tactical Marine ready for battle" << std::endl;
    return ;
}

TacticalMarine::TacticalMarine(const TacticalMarine &src)
{
    *this = src;
    std::cout << "Tactical Marine ready for action!" << std::endl;
    return ;
}


TacticalMarine::~TacticalMarine(void)
{
    std::cout << "Aaargh ..." << std::endl;
    return ;
}


TacticalMarine	&TacticalMarine::operator= (const TacticalMarine &rhs)
{
	(void)rhs;
	return (*this);
}

ISpaceMarine	*TacticalMarine::clone(void) const
{
    return (new TacticalMarine);
}

void	TacticalMarine::battleCry(void) const
{
    std::cout << "For the Holy PLOT !" << std::endl;
    return ;
}

void	TacticalMarine::rangedAttack(void) const
{
    std::cout << "* attacks with bolter *" << std::endl;
    return ;
}

void	TacticalMarine::meleeAttack(void) const
{
    std::cout << "* attacks with chainsword *" << std::endl;
    return ;
}
