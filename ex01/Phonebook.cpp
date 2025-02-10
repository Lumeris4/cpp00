/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 12:12:17 by lelanglo          #+#    #+#             */
/*   Updated: 2025/02/10 10:14:22 by lelanglo         ###   ########.fr       */
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

	std::cout << "     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "----------|----------|----------|----------|" << std::endl;
	for (int i = 0; i < this->_index; i++)
		this->_Phonebook[i].get_infos_contact(i + 1);
	while(42)
	{
		std::cout << "Choose a index between 1 and 8" << std::endl;
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cout << "See you later !" << std::endl;
			exit(0);
		}
		if (input.length() != 1)
			std::cout << "Are you stupid ?\n I said a number between 1 and 8" << std::endl;
		else if ('1' <= input[0] && input[0] <= '8')
		{
			if (this->_index < input[0] - '0')
				std::cout << "This contact does not exist." << std::endl;
			else
				break;
		}
		else
			std::cout << "I said a number between 1 and 8" << std::endl;
	}
	this->_Phonebook[input[0] - '0' - 1].get_all_infos();
	return ;
}