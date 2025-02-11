/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 12:57:11 by lelanglo          #+#    #+#             */
/*   Updated: 2025/02/11 11:25:12 by lelanglo         ###   ########.fr       */
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
	return;
}

void Contact::get_infos_contact(int index)
{

	int len;
	std::cout << "         " << index << "|";
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
	std::cout << std::endl;
	std::cout << "----------|----------|----------|----------|" << std::endl;
}

void Contact::add_contact()
{
	std::string	result;

	for (int i= 0; i < 5; i++)
	{
		while (1)
		{
			std::cout << "Enter the " << this->_field_name[i] << ":\n";
			std::getline(std::cin, result);
			if (std::cin.eof())
			{
				std::cout << "See you later !" << std::endl;
				exit(0);
			}
			if (result.length() > 0)
				break;
			else
				std::cout << "Please enter Something !\n";
		}
		this->_info[i] = result;
	}
}

void Contact::get_all_infos()
{
	std::cout << "First Name : " << this->_info[0] << std::endl;
	std::cout << "Last Name : " << this->_info[1] << std::endl;
	std::cout << "Nickname : " << this->_info[2] << std::endl;
	std::cout << "Phone number : " << this->_info[3] << std::endl;
	std::cout << "Darkest Secret : " << this->_info[4] << std::endl;
}