#ifndef POWERFIST_HPP
# define POWERFIST_HPP

# include <iostream>

# include "AWeapon.hpp"

class PowerFist : public AWeapon
{
    public:

        PowerFist(void);
        PowerFist(const PowerFist &src);
        virtual	~PowerFist(void);

        PowerFist   &operator= (const PowerFist &rhs);

        void  attack(void) const;
};

#endif