/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 12:25:20 by lelanglo          #+#    #+#             */
/*   Updated: 2025/02/07 12:37:09 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include <cstdlib>
#include <iostream>
#include <string>

class Contact {
	private:
		std::string _field_name[5];
		std::string	_info;
		
	public:

	Contact();
	~Contact();

	void add_contact();
	void get_infos_contact(int index);
};