/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 16:10:00 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/13 15:00:58 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{	
}

Contact::~Contact(void)
{
}

std::string		Contact::get_data(int i)
{
	return(this->_data[i]);
}

void	Contact::set_data(std::string str, int i)
{
	this->_data[i] = str;
}