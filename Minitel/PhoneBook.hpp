/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 15:12:23 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/13 14:45:59 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <sstream>
#include <string>
#include <cstring>

class	Phonebook
{
	public:
			Phonebook(void);
			~Phonebook(void);
			void		add(void);
			int			add_info(std::string str, int i);
			void		search(void);
			void		print(int i);
			std::string adapt(std::string str);
			int			isNumber(std::string str);
			int 		strToInt(const std::string str);
	private:
			Contact _contacts[8];
			int		_index;
};

#endif
