/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdelanno <pdelanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 17:12:51 by pdelanno          #+#    #+#             */
/*   Updated: 2023/09/13 14:46:07 by pdelanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

Phonebook::Phonebook(void)
{
    this->_index = 0;
    std::cout << "\033[1m\U0001F48B Welcome to minitel...\033[0m";
	std::cout << std::endl;
	std::cout << "\033[1mYou can type 'ADD', 'SEARCH' or 'EXIT'...\033[0m";
	std::cout << std::endl;
}

Phonebook::~Phonebook(void)
{
    std::cout << "\033[1mBye... See you soon \U0001F48B\n\033[0m";
}

int    Phonebook::add_info(std::string text, int i)
{
    std::string str;

    while (1)
    {
        std::cout << "Enter " << text << ": ";
        if (std::getline(std::cin, str) && !str.empty())
        {
            this->_contacts[this->_index % 8].set_data(str, i);
            return (1);
        }
        else if (std::cin.eof())
		{
			std::cout << std::endl;
			return (0);
		}
        else
            std::cout << "\033[1;31mERROR\033[0m" << std::endl;
    }
}

void    Phonebook::add(void)
{
    std::stringstream s;
    int         i;

    i = 0;
    if (this->_index > 7)
        std::cout << "\033[1;5;31mATTENTION OVERWRITE\033[0m" << std::endl;
    if (add_info("first name", i) == 0)
        return ;
    i++;
    if (add_info("last name", i) == 0)
        return ;
    i++;
    if (add_info("nickname", i) == 0)
        return ;
    i++;
    if (add_info("phone number", i) == 0)
        return ;
    i++;
    if (add_info("darkest secret", i) == 0)
        return ;
    i++;
    s << this->_index + 1;
    this->_contacts[this->_index % 8].set_data(s.str(), i);
    this->_index++;
    std::cout << "\033[1;35mContact added \U0001F609\033[0m" <<std::endl;
}

int Phonebook::isNumber(std::string str)
{
    std::string::iterator i;

    for (i = str.begin(); i != str.end(); ++i)
    {
        if (!isdigit(*i))
            return (0);
    }
    return (1);
}

int Phonebook::strToInt(const std::string str)
{
    std::istringstream s(str);
    int nb;

    if (s >> nb)
        return (nb);
    else
        return (0);
}

std::string Phonebook::adapt(std::string str)
{
    std::string newString;
    int i;
    size_t j;
    int l;

    for (j = 0; j < str.length(); ++j)
        if (str[j] == '\t')
        {
            for (i = 0; i < 9; i++)
                newString += ' ';
            newString += '.';
            return (newString);
        }
    if (str.length() > 10)
    {
        newString = str.substr(0, 9);
        newString += '.';
        return (newString);
    }
    else
    {
        l = 10 - str.length();
        for (i = 0; i < l; i++)
            newString += ' ';
        newString += str;
    }
    return (newString);
}

void Phonebook::print(int i)
{
    i -= 1;
    std::cout << "First name: " << _contacts[i % 8].get_data(0) << std::endl;
    std::cout << "Last name: " <<_contacts[i % 8].get_data(1) << std::endl;
    std::cout << "Nickname: " <<_contacts[i % 8].get_data(2) << std::endl;
    std::cout << "Phone number: " <<_contacts[i % 8].get_data(3) << std::endl;
    std::cout << "Darkest secret: " <<_contacts[i % 8].get_data(4) << std::endl;
}

void Phonebook::search(void)
{
    std::string str;
    int i;

    if (this->_index == 0)
    {
        std::cout << std::endl << "Phonebook is empty..." << std::endl;
        return ;
    }

    std::cout << " ___________________________________________ " << std::endl;
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    std::cout << "|----------|----------|----------|----------|" << std::endl;

    i = 0;
    while (i < 8)
    {
        if (_contacts[i].get_data(0) != "")
        {
            std::cout << "|" << adapt(_contacts[i].get_data(5));
            std::cout << "|" << adapt(_contacts[i].get_data(0));
            std::cout << "|" << adapt(_contacts[i].get_data(1));
            std::cout << "|" << adapt(_contacts[i].get_data(2)) << "|" << std::endl;
        }
        else
            std::cout << "|          |          |          |          |" << std::endl;
        i++;
    }
    std::cout << " ‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾‾ " << std::endl;
    std::cout << std::endl;
    while (1)
    {
        std::cout << "Enter index to reveal: ";
        if (std::getline(std::cin, str) && !str.empty() && isNumber(str))
        {
            if (strToInt(str) > this->_index || strToInt(str) == 0)
                std::cout << "\033[1;31mERROR\033[0m" << std::endl;
            else
            {
                print(strToInt(str));
                return ;
            }
        }
        else if (std::cin.eof())
		{
			std::cout << std::endl;
			return ;
		}
        else
            std::cout << "\033[1;31mERROR\033[0m" << std::endl;
    }
}