/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baboulou <baboulou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/13 08:50:34 by baboulou          #+#    #+#             */
/*   Updated: 2024/02/13 12:45:18 by baboulou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP

# include <iostream>
# include <string>
# include <limits>
# include <ios>
# include "contact.hpp"

class Phonebook
{
	private:
		Contact		contacts[8];
		int			contactCount;
		int			contactIndex;
	public:
		Phonebook();
		~Phonebook();
		void		setContactCount(void);
		void		setContactIndex(void);
		int			getContactCount(void);
		int			getContactIndex(void);
		void		addContact(Contact);
		void		displayContacts();
		void		displayContact(int);
		Contact		parseContact(void);
};

bool	isNumber(std::string str);

#endif
