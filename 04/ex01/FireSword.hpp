#ifndef FIRESWORD_HPP
# define FIRESWORD_HPP

# include <iostream>

# include "AWeapon.hpp"

class FireSword : public AWeapon
{
	public:

		FireSword(void);
		FireSword(const FireSword &src);
		virtual	~FireSword(void);

		FireSword   &operator= (const FireSword &rhs);

		void  attack(void) const;
};

#endif