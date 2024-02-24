/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baboulou <baboulou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/18 18:14:38 by baboulou          #+#    #+#             */
/*   Updated: 2024/02/19 08:40:14 by baboulou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int		main(void)
{
	Animal* animals[10];

	for (int i = 0; i < 5; i++)
		animals[i] = new Cat();
	for (int i = 5; i < 10; i++)
		animals[i] = new Dog();

	std::cout << std::endl;
	std::cout << "--------------------------------" << std::endl;
	std::cout << "--------------------------------" << std::endl;
	std::cout << std::endl;
	
	for (int i = 0; i < 10; i++)
		animals[i]->makeSound();

	std::cout << std::endl;
	std::cout << "--------------------------------" << std::endl;
	std::cout << "--------------------------------" << std::endl;
	std::cout << std::endl;
	
	for (int i = 0; i < 10; i++)
		delete animals[i];
	return (0);
}
