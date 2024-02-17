/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baboulou <baboulou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/15 16:40:51 by baboulou          #+#    #+#             */
/*   Updated: 2024/02/17 03:20:58 by baboulou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP

# define FIXED_HPP

# include <iostream>

class Fixed
{
	private:
		int					raw;
		static const int	bits;
	public:
		Fixed();
		Fixed(const Fixed &fixed);
		~Fixed();
		Fixed				&operator=(const Fixed &fixed);
		int					getRawBits(void) const;
		void				setRawBits(int const raw);
};

const int	Fixed::bits = 8;

#endif
