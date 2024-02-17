/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baboulou <baboulou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 17:25:25 by baboulou          #+#    #+#             */
/*   Updated: 2024/02/16 02:38:11 by baboulou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <unistd.h>

int main(void)
{
	Zombie *hordeOfZombies = zombieHorde(5, "Bahae");
	if (!hordeOfZombies)
	{
		std::cout << "Error: zombieHorde returned NULL" << std::endl;
		return (1);
	}
	for (int i = 0; i < 5; i++)
		hordeOfZombies[i].announce();
	delete [] hordeOfZombies;
	return (0);
}
