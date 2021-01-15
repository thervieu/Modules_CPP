/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/15 21:49:03 by user42            #+#    #+#             */
/*   Updated: 2021/01/15 23:02:35 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
}

Brain::~Brain(void)
{
}

std::string	Brain::identify(void)
{
	std::stringstream buffer;
	
	buffer << this;
	return (buffer.str());
}
