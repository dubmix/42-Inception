/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 15:29:14 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/13 14:45:03 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP

# define CONTACT_HPP

# include <iostream>
# include <string>

class	Contact
{
	public:
			Contact(void);
			~Contact(void);
			void			set_data(std::string str, int i);
			std::string		get_data(int i);
	private:
			std::string			_data[6];
};

#endif
