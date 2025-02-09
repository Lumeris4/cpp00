/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 12:12:17 by lelanglo          #+#    #+#             */
/*   Updated: 2025/02/09 12:29:49 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

PhoneBook::PhoneBook()
{
	this->_index = 0;
	return;
}

PhoneBook::~PhoneBook()
{
	std::cout << "Destructor PhoneBook called" << std::endl;
	return ;
}

void PhoneBook::add_contact_in_phonebook()
{
	if (this->_index < 8)
	{
		this->_Phonebook[this->_index].add_contact();
		this->_index++;
	}
	else
	{
		for(int i = 1; i < 8; i++)
			this->_Phonebook[i -1] = this->_Phonebook[i];
		this->_Phonebook[7].add_contact();
	}
}

void PhoneBook::get_infos_of_contact()
{
	std::string input;
	
	while(42)
	{
		std::cout << "Choose a index between 1 and 8" << std::endl;
		std::getline(std::cin, input);
		if (input.length() != 1)
			std::cout << "Are you stupid ?\n I said between 1 and 8" << std::endl;
	}
}