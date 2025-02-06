/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelanglo <lelanglo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/06 12:31:19 by lelanglo          #+#    #+#             */
/*   Updated: 2025/02/06 12:51:09 by lelanglo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBREAKBLE NOISE *" << std::endl;
		return 0;
	}
	for (int j = 1; argv[j]; j++)
	{
		for (int i = 0; argv[j][i]; i++)
			argv[j][i] = toupper(argv[j][i]);
		std::cout << argv[j] << " ";
	}
	std::cout << std::endl;
	return 0;
}
