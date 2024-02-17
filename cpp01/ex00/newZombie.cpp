/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baboulou <baboulou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 16:27:04 by baboulou          #+#    #+#             */
/*   Updated: 2024/02/16 02:37:42 by baboulou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie* newZombie = new(std::nothrow) Zombie(name);
	if (newZombie == 0)
	{
		std::cout << "Error when allocating zombies" << name << std::endl;
		return (0);
	}
	return (newZombie);
}
