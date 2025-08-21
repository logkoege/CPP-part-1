/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 21:24:56 by logkoege          #+#    #+#             */
/*   Updated: 2025/05/14 02:46:31 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int	main()
{
	Phonebook	Phonebook;
	std::string	command;

	while(1)
	{
		std::cout << "Enter a command (ADD, SEARCH, EXIT)" << std::endl;
		std::getline(std::cin, command);
		if (!std::cin)
		{
			std::cout << "ctrl D" << std::endl;
			exit(0);
		}
		if (command == "EXIT")
			return(0);
		if (command == "ADD")
			Phonebook.ADD_Contact();
		if (command == "SEARCH")
			Phonebook.Search_Contact();
	}
	return (0);
}
