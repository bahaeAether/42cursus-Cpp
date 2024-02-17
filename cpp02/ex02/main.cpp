/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baboulou <baboulou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/16 02:17:33 by baboulou          #+#    #+#             */
/*   Updated: 2024/02/17 00:37:51 by baboulou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

void	printValue(std::string s)
{
	std::cout << s << std::endl;
	s.erase(1);
	std::cout << s << std::endl;
}

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << "a = " << a << std::endl;
	std::cout << "a = " << ++a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a = " << a++ << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "-----------------" << std::endl;
	std::cout << "max = " << Fixed::max(b, a) << std::endl;
	if (a > b)
		std::cout << "a is bigger than b" << std::endl;
	else if (a < b)
		std::cout << "b is bigger than a" << std::endl;
	else
		std::cout << "a and b are equal" << std::endl;

	return 0;
}
