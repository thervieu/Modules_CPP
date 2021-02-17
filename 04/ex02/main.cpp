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

	ISquad* vlc = new Squad;
	
	vlc->push(bob);
	vlc->push(jim);
	vlc->push(jim->clone());
	std::cout << std::endl;
	
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
		std::cout << std::endl;
	}
	
	std::cout << "There are " << vlc->getCount() << " element(s) in the squad." << std::endl << std::endl;
	
	std::cout << "Adding NULL..." << std::endl;
	vlc->push(NULL);
	
	std::cout << "There are " << vlc->getCount() << " element(s) in the squad." << std::endl << std::endl;
	
	std::cout << "Adding bob again..." << std::endl;
	vlc->push(bob);

	std::cout << "There are " << vlc->getCount() << " element(s) in the squad." << std::endl << std::endl;
	
	std::cout << "Adding a clone from bob..." << std::endl;
	vlc->push(bob->clone());

	std::cout << "There are " << vlc->getCount() << " element(s) in the squad." << std::endl << std::endl;

	std::cout << "Deleting squad." << std::endl << std::endl;
	delete vlc;

	std::cout << "Copy constructor :" << std::endl;
	
	TacticalMarine* tact = new TacticalMarine;
	AssaultTerminator* term = new AssaultTerminator;

	TacticalMarine* tact2 = new TacticalMarine(*tact);
	AssaultTerminator* term2 = new AssaultTerminator(*term);

	Squad *squad = new Squad;

	squad->push(tact2);
	squad->push(term2);

	delete tact;
	delete term;

	delete squad;
}
