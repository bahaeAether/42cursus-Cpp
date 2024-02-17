/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baboulou <baboulou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 17:08:27 by baboulou          #+#    #+#             */
/*   Updated: 2024/02/15 15:37:20 by baboulou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie zombie1("Baboulou");
	Zombie zombie2("Zombie2");
	Zombie *allocZombie = 0;

	zombie1.announce();
	zombie2.announce();

	allocZombie = newZombie("AllocZombie");
	if (!allocZombie)
		return (1);
	allocZombie->announce();
	delete allocZombie;

	randomChump("Evaluator");

	return (0);
}
