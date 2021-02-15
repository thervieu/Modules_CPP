/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 13:32:11 by user42            #+#    #+#             */
/*   Updated: 2021/01/19 00:19:13 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_level = 1;
	_name = "Default";
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
}

FragTrap::FragTrap(std::string name)
{
	_hitPoints = 100;
	_maxHitPoints = 100;
	_energyPoints = 100;
	_maxEnergyPoints = 100;
	_level = 1;
	_name = name;
	_meleeAttackDamage = 30;
	_rangedAttackDamage = 20;
	_armorDamageReduction = 5;
	std::cout << "FragTrap Default Constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &ft)
{
	*this = ft;
	std::cout << "FragTrap Assignation Constructor called" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap& ft)
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

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << "FragTrap <" << _name << "> uses his psychic abilities on " << target << " doing " << _rangedAttackDamage << " damage (ranged attack)" << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << "FragTrap <" << _name << "> uses his fierce fists on " << target  << " doing " << _meleeAttackDamage << " damage (melee attack)" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	int am = amount;
	am = ((am - _armorDamageReduction) > 0) ? am - _armorDamageReduction : 0;
	std::cout << "FragTrap <" << _name << "> takes " << am << " damage !!!" << std::endl;
	_hitPoints = ((_hitPoints - am) > 0) ? _hitPoints - am : 0;
	std::cout << "FragTrap <" << _name << "> hit points : " << _hitPoints << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "FragTrap <" << _name << "> is repaired !" << std::endl;
	_hitPoints = (_hitPoints + amount <= 100) ? (_hitPoints + amount) : 100;
	std::cout << "FragTrap <" << _name << "> hit points : " << _hitPoints << std::endl;
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	static const std::string attacks[] = {
	        "Fireball",
	        "Earthball",
	        "Waterball",
	        "Lightball",
	        "Airball"
	};

	if (this->_energyPoints >= 25)
	{
		this->_energyPoints -= 25;
		std::cout <<  "FragTrap <" << _name << "> attacked " << target << " with " << attacks[rand() % 5] << "." << std::endl;
	}
	else
		std::cout <<  "FragTrap <" << _name << "> Crap! not enough energy points !" << std::endl;
}
