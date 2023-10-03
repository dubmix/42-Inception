/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 15:06:51 by pdelanno          #+#    #+#             */
/*   Updated: 2023/08/16 17:06:33 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	Phonebook	phb;
	std::string	str;

	while (str != "EXIT")
	{
		std::cout << "Enter a command > ";
		std::getline (std::cin, str);
		if (str == "ADD")
			phb.add();
		if (str == "SEARCH")
			phb.search();
		if (std::cin.eof())
		{
			std::cout << std::endl;
			return (0);
		}
		std::cout << std::endl;
	}
	return (0);
}
