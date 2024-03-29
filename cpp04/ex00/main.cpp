/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baboulou <baboulou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 18:14:38 by baboulou          #+#    #+#             */
/*   Updated: 2024/02/19 06:16:55 by baboulou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int		main(void)
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* k = new WrongAnimal();
	const WrongAnimal* l = new WrongCat();

	std::cout << std::endl;
	std::cout << "Meta: " << meta->getType() << std::endl;
	std::cout << "I:    " << i->getType() << std::endl;
	std::cout << "J:    " << j->getType() << std::endl;
	std::cout << "K:    " << k->getType() << std::endl;
	std::cout << "L:    " << l->getType() << std::endl;

	std::cout << std::endl;
	std::cout << "--------------------------------" << std::endl;
	std::cout << "--------------------------------" << std::endl;
	std::cout << std::endl;

	meta->makeSound();
	i->makeSound();
	j->makeSound();
	k->makeSound();
	l->makeSound();
	
	std::cout << std::endl;
	std::cout << "--------------------------------" << std::endl;
	std::cout << "--------------------------------" << std::endl;
	std::cout << std::endl;
	
	delete meta;
	delete i;
	delete j;
	delete k;
	delete l;

	return (0);
}
