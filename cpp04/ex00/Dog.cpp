/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baboulou <baboulou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 18:13:42 by baboulou          #+#    #+#             */
/*   Updated: 2024/02/18 18:17:21 by baboulou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	std::cout << "IT IS A DOG!" << std::endl;
}

Dog::Dog(const Dog &cpy) : Animal(cpy)
{
	this->type = cpy.type;
	std::cout << "IT IS A DOG!" << std::endl;
}

Dog		&Dog::operator=(const Dog &cpy)
{
	this->type = cpy.type;
	std::cout << "Dog operator= called" << std::endl;
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Dog is dying :c" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof Woof !!" << std::endl;
}
