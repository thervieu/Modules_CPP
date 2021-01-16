/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 09:59:09 by user42            #+#    #+#             */
/*   Updated: 2021/01/16 11:29:47 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
	public:

		Fixed(void);
		Fixed(const Fixed&);
		Fixed(const int);
		Fixed(const float);
		~Fixed(void);

		Fixed	&operator=(const Fixed&);

		bool	operator==(const Fixed&) const;
		bool	operator!=(const Fixed&) const;
		bool	operator>=(const Fixed&) const;
		bool	operator>(const Fixed&) const;
		bool	operator<=(const Fixed&) const;
		bool	operator<(const Fixed&) const;

		Fixed	operator+(const Fixed&) const;
		Fixed	operator-(const Fixed&) const;
		Fixed	operator*(const Fixed&) const;
		Fixed	operator/(const Fixed&) const;

		Fixed	&operator++(void);
		Fixed	operator++(int);
		Fixed	&operator--(void);
		Fixed	operator--(int);
	
		static Fixed		&max(Fixed&, Fixed&);
		static const Fixed	&max(const Fixed&, const Fixed&);
		static Fixed		&min(Fixed&, Fixed&);
		static const Fixed	&min(const Fixed&, const Fixed&);

		int		toInt(void) const;
		float	toFloat(void) const;

		void	setRawBits(int const raw);
		int		getRawBits(void) const;

	private:

		int		_fixedValue;
		static const int	_bits = 8;

};

std::ostream &operator<<(std::ostream& os, const Fixed& fixed);
Fixed		&max(Fixed&, Fixed&);
Fixed		&min(Fixed&, Fixed&);

#endif