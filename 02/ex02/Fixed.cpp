/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 10:00:06 by user42            #+#    #+#             */
/*   Updated: 2021/01/16 11:28:12 by user42           ###   ########.fr       */
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

bool	Fixed::operator==(const Fixed& rhs) const
{
	return (_fixedValue == rhs.getRawBits());
}

bool	Fixed::operator!=(const Fixed& rhs) const
{
	return (_fixedValue != rhs.getRawBits());

}

bool	Fixed::operator>=(const Fixed& rhs) const
{
	return (_fixedValue >= rhs.getRawBits());

}

bool	Fixed::operator>(const Fixed& rhs) const
{
	return (_fixedValue > rhs.getRawBits());

}

bool	Fixed::operator<=(const Fixed& rhs) const
{
	return (_fixedValue <= rhs.getRawBits());

}

bool	Fixed::operator<(const Fixed& rhs) const
{
	return (_fixedValue < rhs.getRawBits());
}


Fixed	Fixed::operator+(const Fixed& rhs) const
{
	return (Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed	Fixed::operator-(const Fixed& rhs) const
{
	return (Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed	Fixed::operator*(const Fixed& rhs) const
{
	return (Fixed(this->toFloat() * rhs.toFloat()));

}

Fixed	Fixed::operator/(const Fixed& rhs) const
{
	return (Fixed(this->toFloat() / rhs.toFloat()));
}


Fixed	&Fixed::operator++(void)
{
	_fixedValue++;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp(*this);
	operator++();
	return (tmp);
}

Fixed	&Fixed::operator--(void)
{
	_fixedValue--;
	return (*this);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp(*this);
	operator--();
	return (tmp);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	return (a > b ? a : b);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	return (a > b ? b : a);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	return (a > b ? b : a);
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

Fixed	&max(Fixed &a, Fixed &b)
{
	return (a > b ? a : b);
}
Fixed	&min(Fixed &a, Fixed &b)
{
	return (a > b ? b : a);
}