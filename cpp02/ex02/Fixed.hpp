/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baboulou <baboulou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 02:02:26 by baboulou          #+#    #+#             */
/*   Updated: 2024/02/17 03:21:04 by baboulou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP

# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int					raw;
		static const int	bits;

	public:
		Fixed();
		Fixed(const Fixed &fixed);
		Fixed(const int raw);
		Fixed(const float raw);
		~Fixed();
		std::ostream		&operator<<(std::ostream &cout);
		Fixed				&operator=(const Fixed &fixed);
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
		float				toFloat(void) const;
		int					toInt(void) const;
		bool				operator>(const Fixed &fixed) const;

		bool				operator<(const Fixed &fixed) const;
		bool				operator>=(const Fixed &fixed) const;
		bool				operator<=(const Fixed &fixed) const;
		bool				operator==(const Fixed &fixed) const;
		bool				operator!=(const Fixed &fixed) const;

		Fixed				operator+(const Fixed &fixed) const;
		Fixed				operator-(const Fixed &fixed) const;
		Fixed				operator*(const Fixed &fixed) const;
		Fixed				operator/(const Fixed &fixed) const;

		Fixed				&operator++(void);
		Fixed				operator++(int);
		Fixed				&operator--(void);
		Fixed				operator--(int);

		static Fixed		&min(Fixed &a, Fixed &b);
		static Fixed		&max(Fixed &a, Fixed &b);
		static const Fixed	&min(const Fixed &a, const Fixed &b);
		static const Fixed	&max(const Fixed &a, const Fixed &b);
};

const int	Fixed::bits = 8;

std::ostream	&operator<<(std::ostream &cout, const Fixed &fixed);

#endif
