/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 13:32:11 by user42            #+#    #+#             */
/*   Updated: 2021/01/19 00:18:45 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 50;
	_maxEnergyPoints = 50;
	_level = 1;
	_name = "Default";
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;
}

ScavTrap::ScavTrap(std::string name)
{
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 50;
	_maxEnergyPoints = 50;
	_level = 1;
	_name = name;
	_meleeAttackDamage = 15;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 3;
	std::cout << "ScavTrap Default Constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &ft)
{
	*this = ft;
	std::cout << "ScavTrap Assignation Constructor called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap& ft)
{
	if (this != &ft)
	{
		_hitPoints = ft._hitPoints;
		_maxHitPoints = ft._maxHitPoints;
		_energyPoints = ft._energyPoints;
		_maxEnergyPoints = ft._maxEnergyPoints;
		_level = ft._level;
		_name = ft._name;
		_meleeAttackDamage = ft._meleeAttackDamage;
		_rangedAttackDamage = ft._rangedAttackDamage;
		_armorDamageReduction = ft._armorDamageReduction;
	}
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap Default Destructor called" << std::endl;
}

void	ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "SCAVTRAP <" << _name << "> uses his psychic abilities on " << target << " doing "  << _rangedAttackDamage << " damage (ranged attack)" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "SCAVTRAP <" << _name << "> uses his fierce fists on " << target  << " doing " << _meleeAttackDamage << " damage (melee attack)" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	int am = amount;
	am = ((am - _armorDamageReduction) > 0) ? am - _armorDamageReduction : 0;
	std::cout << "SCAVTRAP <" << _name << "> takes " << am << " damage !!!" << std::endl;
	_hitPoints = ((_hitPoints - am) > 0) ? _hitPoints - am : 0;
	std::cout << "SCAVTRAP <" << _name << "> hit points : " << _hitPoints << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "SCAVTRAP <" << _name << "> is repaired !" << std::endl;
	_hitPoints = (_hitPoints + amount <= 100) ? (_hitPoints + amount) : 100;
	std::cout << "SCAVTRAP <" << _name << "> hit points : " << _hitPoints << std::endl;
}

void	ScavTrap::challengeNewcomer(std::string target)
{
	std::string challenges[] = {
	        "Game of Card",
	        "Game of Rolling Dice",
	        "Russian Roulette",
	        "Sing a Song"
	};

	std::string challenge = challenges[rand() % 4];

		if (this->_energyPoints >= 25)
	{
		this->_energyPoints -= 25;
		std::cout << "challenged " << target << " with " << challenge << "." << std::endl;
	}
	else
		std::cout << "Crap! not enough energy points !" << std::endl;
}
