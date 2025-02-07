/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 12:57:11 by lelanglo          #+#    #+#             */
/*   Updated: 2025/02/07 13:25:32 by lelanglo         ###   ########.fr       */
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