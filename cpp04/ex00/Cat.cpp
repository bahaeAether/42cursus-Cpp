/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baboulou <baboulou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 18:08:45 by baboulou          #+#    #+#             */
/*   Updated: 2024/02/18 18:17:03 by baboulou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	std::cout << "IT IS A CAT!" << std::endl;
}

Cat::Cat(const Cat &cpy) : Animal(cpy)
{
	this->type = cpy.type;
	std::cout << "IT IS A CAT!" << std::endl;
}

Cat		&Cat::operator=(const Cat &cpy)
{
	this->type = cpy.type;
	std::cout << "Cat operator= called" << std::endl;
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Cat is dying :c" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meowwww..." << std::endl;
}
