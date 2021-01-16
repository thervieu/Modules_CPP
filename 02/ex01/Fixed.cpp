/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 10:00:06 by user42            #+#    #+#             */
/*   Updated: 2021/01/16 11:22:40 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void)
{
}

Fixed::Fixed(const Fixed& fixed)
{
	*this = fixed;
}

Fixed::Fixed(const int nb)
{
	_fixedValue = nb << _bits;
}

Fixed::Fixed(const float nb)
{
	_fixedValue = roundf(nb * (float)(1 << _bits));
}

Fixed::~Fixed(void)
{
}

Fixed	&Fixed::operator=(const Fixed& fixed)
{
	if (this != &fixed)
		_fixedValue = fixed.getRawBits();
	return (*this);
}

int		Fixed::toInt(void) const
{
	return (_fixedValue >> _bits);
}

float	Fixed::toFloat(void) const
{
	float	_float;
	_float = (float)(float(_fixedValue) /  (float)(1 << 8));
	return (_float);
}

void	Fixed::setRawBits(int const raw)
{
	_fixedValue = raw;
}

int		Fixed::getRawBits(void) const
{
	return (_fixedValue);
}

std::ostream &operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return (os);
}
