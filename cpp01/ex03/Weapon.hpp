/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baboulou <baboulou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/14 18:16:23 by baboulou          #+#    #+#             */
/*   Updated: 2024/02/14 18:19:51 by baboulou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP

# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{
	private:
		std::string			type;
	public:
		Weapon();
		Weapon(std::string type);
		~Weapon();
		void				setType(std::string type);
		const std::string&	getType(void);
};

#endif
