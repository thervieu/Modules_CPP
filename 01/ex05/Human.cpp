/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 21:49:03 by user42            #+#    #+#             */
/*   Updated: 2021/01/15 22:59:29 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"


Human::Human(void)
{
	_brain = new Brain();
}

Human::~Human(void)
{
	delete _brain;
}

Brain	&Human::getBrain(void)
{
	return (*this->_brain);
}

std::string	Human::identify(void)
{
	return (this->getBrain().identify());
}
