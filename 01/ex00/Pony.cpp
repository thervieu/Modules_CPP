/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 21:49:03 by user42            #+#    #+#             */
/*   Updated: 2021/01/15 21:49:04 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"


Pony::Pony(void)
{
}

Pony::~Pony(void)
{
}

void	Pony::setName(std::string str)
{
	_name = str;
}

void	Pony::setColor(std::string str)
{
	_color = str;
}

void	Pony::setAge(int nb)
{
	_age = nb;
}

std::string	Pony::getName(void)
{
	return (_name);
}

std::string	Pony::getColor(void)
{
	return (_color);
}

int		Pony::getAge(void)
{
	return (_age);
}
