#ifndef SORCERER_HPP
# define SORCERER_HPP

# include <iostream>
# include <string>
# include "Victim.hpp"

class Sorcerer
{
	public:

		Sorcerer(void);
		Sorcerer(std::string, std::string);
		Sorcerer(const Sorcerer&);
		~Sorcerer(void);
		Sorcerer &operator=(const Sorcerer&);
		
		void	polymorph(Victim const &);
	
		std::string		getName(void) const;
		std::string		getTitle(void) const;

	private:

		std::string	_name;
		std::string	_title;
};

std::ostream &operator<<(std::ostream& os, const Sorcerer& sorc);

#endif