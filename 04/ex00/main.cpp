#include "Sorcerer.hpp"
#include "Sheep.hpp"
#include "Peon.hpp"

int		main(void)
{
	Sorcerer robert("Robert", "the Magnificent");
	std::cout << std::endl;

	Victim jim("Jimmy");
	std::cout << std::endl;

	Peon joe("Joe");
	std::cout << std::endl;

	Sheep snow("Snow");
	std::cout << std::endl;

	std::cout << robert << jim << joe << snow << std::endl;

	robert.polymorph(jim);
	std::cout << std::endl;

	robert.polymorph(joe);
	std::cout << std::endl;
	
	robert.polymorph(snow);
	std::cout << std::endl;
	return 0;
}