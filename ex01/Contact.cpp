/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 12:57:11 by lelanglo          #+#    #+#             */
/*   Updated: 2025/02/09 12:04:04 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	this->_field_name[0] = "First Name";
	this->_field_name[1] = "Last Name";
	this->_field_name[2] = "Nickname";
	this->_field_name[3] = "Phone Number";
	this->_field_name[4] = "Darkest Secret";
	return;
}

Contact::~Contact()
{
	std::cout << "Destructor Contact called" << std::endl;
	return;
}

void Contact::get_infos_contact(int index)
{

	int len;
	std::cout << "     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "----------|----------|----------|----------|" << std::endl;
	std::cout << "      " << index << "|";
	for (int i = 0;  i < 3; i++)
	{
		len = this->_info[i].length();
		if (len <= 10)
		{
			for(int j = 0; j != 10 - len; j++)
				std::cout << " ";
			std::cout << this->_info[i] << "|";
		}
		else if (len > 10)
		{
			for(int k = 0; k < 9; k++)
				std::cout << this->_info[i][k];
			std::cout << ".|";
		}
	}
	std::cout << "----------|----------|----------|----------|" << std::endl;
}

void Contact::add_contact()
{
	std::string	result;

	for (int i= 0; i < 5; i++)
	{
		std::cout << "Enter the" << this->_field_name[i] << ":\n";
		std::getline(std::cin, result);
		if (std::cin.eof())
		{
			std::cout << "CRTL D pressed !" << std::endl;
			exit(0);
		}
		this->_info[i] = result;
	}
}
