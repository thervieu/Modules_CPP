#include "FragTrap.hpp"

int main()
{
	srand(time(NULL));
	FragTrap michel("Michel");
	std::cout << std::endl;
	
	michel.rangedAttack("robot");
	michel.meleeAttack("robot");
	std::cout << std::endl;

	michel.beRepaired(20);
	michel.takeDamage(100);
	michel.takeDamage(20);
	michel.beRepaired(50);
	std::cout << std::endl;

	michel.vaulthunter_dot_exe("robot");
	michel.vaulthunter_dot_exe("robot");
	michel.vaulthunter_dot_exe("robot");
	michel.vaulthunter_dot_exe("robot");
	michel.vaulthunter_dot_exe("robot");
	std::cout << std::endl;
}
