/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 13:38:28 by lelanglo          #+#    #+#             */
/*   Updated: 2025/02/09 14:14:39 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main()
{
	std::string input;
	PhoneBook phoneBook;
	
	while(1)
	{
		std::cout << "ADD, SEARCH OR EXIT" << std::endl;
		std::getline( std::cin,input);
		if (std::cin.eof())
			break;
		if (input.compare("EXIT") == 0)
			break;
		else if (input.compare("SEARCH") == 0)
			phoneBook.get_infos_of_contact();
		else if (input.compare("ADD") == 0)
			phoneBook.add_contact_in_phonebook();
	}
	std::cout << "See you later !" << std::endl;
	return 0;
}
