#include <iostream>

#include "Squad.hpp"
#include "ISquad.hpp"
#include "ISpaceMarine.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;

	ISquad* _isquad = new Squad;
	
	_isquad->push(bob);
	_isquad->push(jim);
	_isquad->push(jim->clone());
	std::cout << std::endl;
	
	for (int i = 0; i < _isquad->getCount(); ++i)
	{
		ISpaceMarine* cur = _isquad->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
		std::cout << std::endl;
	}
	
	std::cout << "There are " << _isquad->getCount() << " element(s) in the squad." << std::endl << std::endl;
	
	std::cout << "Adding NULL..." << std::endl;
	_isquad->push(NULL);
	
	std::cout << "There are " << _isquad->getCount() << " element(s) in the squad." << std::endl << std::endl;
	
	std::cout << "Adding bob again..." << std::endl;
	_isquad->push(bob);

	std::cout << "There are " << _isquad->getCount() << " element(s) in the squad." << std::endl << std::endl;
	
	std::cout << "Adding a clone from bob..." << std::endl;
	_isquad->push(bob->clone());

	std::cout << "There are " << _isquad->getCount() << " element(s) in the squad." << std::endl << std::endl;

	std::cout << "Deleting squad." << std::endl << std::endl;

	delete _isquad;

}
