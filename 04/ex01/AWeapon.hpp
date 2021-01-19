#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <iostream>
# include <string>

class AWeapon
{
    public:

        AWeapon(void);
        AWeapon(const AWeapon &src);
        AWeapon(const std::string &name, int apcost, int damage);

        virtual           ~AWeapon(void);

        AWeapon           &operator= (const AWeapon &rhs);

        int               getAPCost(void) const;
        int               getDamage(void) const;
        const std::string getName(void) const;

        virtual     void    attack(void) const = 0;

    protected:

        std::string       _name;
        int               _damage;
        int               _apcost;
};

#endif