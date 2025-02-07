/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 12:38:22 by lelanglo          #+#    #+#             */
/*   Updated: 2025/02/07 12:46:13 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact _Phonebook[8];
		int		_index;
	
	public:
	
	PhoneBook();
	~PhoneBook();

	void	add_contact_in_phonebook();
	void	get_infos_of_contact();
	
};