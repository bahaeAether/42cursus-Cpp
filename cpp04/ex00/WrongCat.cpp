/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baboulou <baboulou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 18:08:45 by baboulou          #+#    #+#             */
/*   Updated: 2024/02/18 18:17:03 by baboulou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->type = "WrongCat";
	std::cout << "IT IS A WRONGCAT!" << std::endl;
}

WrongCat::WrongCat(const WrongCat &cpy) : WrongAnimal(cpy)
{
	this->type = cpy.type;
	std::cout << "IT IS A WRONGCAT!" << std::endl;
}

WrongCat		&WrongCat::operator=(const WrongCat &cpy)
{
	this->type = cpy.type;
	std::cout << "WrongCat operator= called" << std::endl;
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat is dying :c" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Haw Haw hh" << std::endl;
}
