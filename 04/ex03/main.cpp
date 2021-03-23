#include "AMateria.hpp"
#include "Character.hpp"
#include "ICharacter.hpp"
#include "MateriaSource.hpp"
#include "IMateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
    std::cout << std::endl;

	me->use(1, *bob);
    std::cout << std::endl;

	AMateria* tmp2;
	tmp2 = tmp->clone();
	
	std::cout << "Teaching a copy of my Cure to bob and using it on himself." << std::endl;
	bob->equip(tmp2);
	bob->use(0, *bob);
    std::cout << std::endl;
	
	std::cout << "This is my Cure Materia:" << std::endl;
	std::cout << *tmp << std::endl;
	
	std::cout << "This is bob's Cure Materia, it has a higher XP:" << std::endl;
	std::cout << *tmp2 << std::endl;
	
	std::cout << "Bob forgets how to use Cure but try to use it anyway:" << std::endl;
	bob->unequip(0);
	bob->use(0, *bob);
    std::cout << std::endl;
	
	std::cout << "* Nothing happened *" << std::endl;
    
	delete tmp2;

	delete bob;
	delete me;
	delete src;

	return 0;
}
