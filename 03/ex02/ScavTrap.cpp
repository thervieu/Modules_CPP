/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 13:32:11 by user42            #+#    #+#             */
/*   Updated: 2021/01/19 00:16:54 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
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
	_level = 1;
	std::cout << "ScavTrap Default Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 50;
	_maxEnergyPoints = 50;
	_level = 1;
	_name = name;
	_meleeAttackDamage = 20;
	_rangedAttackDamage = 15;
	_armorDamageReduction = 3;
	_level = 1;
	std::cout << "ScavTrap Default Constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &other) : ClapTrap(other)
{
	std::cout << "ScavTrap Assignation called" << std::endl;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &other)
{
	(void)other;
	std::cout << "ScavTrap operator= called" << std::endl;
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

void	ScavTrap::challengeNewcomer(std::string target)
{
	std::string challenges[] = {
	        "Game of Card",
	        "Game of Rolling Dice",
	        "Russian Roulette",
	        "Sing a Song"
	};

	if (this->_energyPoints >= 25)
	{
		this->_energyPoints -= 25;
		std::cout << "ScavTrap <" << _name << "> challenged " << target << " with " << challenges[rand() % 4] << "." << std::endl;
	}
	else
		std::cout << "ScavTrap <" << _name << "> Crap! not enough energy points !" << std::endl;
}

void	ScavTrap::rangedAttack(std::string const & target)
{
	std::cout << "ScavTrap <" << _name << "> uses his psychic abilities on " << target << " doing "  << _rangedAttackDamage << " damage (ranged attack)" << std::endl;
}

void	ScavTrap::meleeAttack(std::string const & target)
{
	std::cout << "ScavTrap <" << _name << "> uses his fierce fists on " << target  << " doing " << _meleeAttackDamage << " damage (melee attack)" << std::endl;
}