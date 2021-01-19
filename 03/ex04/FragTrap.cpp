/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 13:32:11 by user42            #+#    #+#             */
/*   Updated: 2021/01/19 00:57:35 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
	_level = 1;
	std::cout << "FragTrap Default Constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
	_level = 1;
	std::cout << "FragTrap Default Constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &other) : ClapTrap(other)
{
	std::cout << "FragTrap Assignation Constructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &other)
{
	(void)other;
	std::cout << _name << ": Hi ! I'm ready !" << std::endl;
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Default Destructor called" << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	static const std::string attacks[5] = {
	        "Fireball",
	        "Earthball",
	        "Waterball",
	        "Lightball"
	        "Airball",
	};

	static const long damages[5] = {
	        10,
	        12,
	        4,
	        23,
	        7
	};

	int random = rand() % 5;

	std::string attack = attacks[random];
	long damage = damages[random];

	if (this->_energyPoints >= 25)
	{
		this->_energyPoints -= 25;
		std::cout << "attacked " << target << " with " << attack << " and does " << damage << " damage(s)." << std::endl;
	}
	else
		std::cout << "Crap! (not enough energy points !" << std::endl;
}

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FRAGTRAP <" << _name << "> uses his psychic abilities on " << target << " doing "  << _rangedAttackDamage << " damage (ranged attack)" << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FRAGTRAP <" << _name << "> uses his fierce fists on " << target  << " doing " << _meleeAttackDamage << " damage (melee attack)" << std::endl;
}