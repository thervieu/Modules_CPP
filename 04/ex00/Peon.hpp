#ifndef PEON_HPP
# define PEON_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Peon: public Victim
{
	public:

		Peon(void);
		Peon(std::string);
		Peon(const Peon&);
		virtual	~Peon(void);
		Peon &operator=(const Peon&);

		void	getPolymorphed(void) const;
	
	
	private:

		std::string	_name;
};

#endif