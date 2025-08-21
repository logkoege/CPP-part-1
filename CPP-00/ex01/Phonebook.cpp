/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 17:15:09 by logkoege          #+#    #+#             */
/*   Updated: 2025/08/19 15:11:41 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook()
{
	ContactCount = 0;
	j = 0;
}

void	Phonebook::ADD_Contact()
{
	if (j < 8)
		j++;
	Contacts[ContactCount % 8].Set_Contact();
	ContactCount++;
}

void	Phonebook::Search_Contact()
{
	std::string	str;
	if (ContactCount == 0)
		std::cout << "no contact" << std::endl;
	else
		{
			std::cout << "_____________________________________________" << std::endl;
			std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
			std::cout << "|__________|__________|__________|__________|" << std::endl;
			for (int i = 0; i <= (j) - 1;++i)
			{
				std::cout << "|" << "         " << i;
				if (Contacts[i].Get_First_Name().size() > 10)
					std::cout << "|" <<  Contacts[i].Get_First_Name().substr(0,9) + ".";
				else
					std::cout << "|" << std::setw(10) << Contacts[i].Get_First_Name();
				if (Contacts[i].Get_Last_Name().size() > 10)
					std::cout << "|" <<  Contacts[i].Get_Last_Name().substr(0,9) + ".";
				else
					std::cout << "|" << std::setw(10) << Contacts[i].Get_Last_Name();
				if (Contacts[i].Get_Nickname().size() > 10)
					std::cout << "|" <<  Contacts[i].Get_Nickname().substr(0,9) + ".|" << std::endl;
				else
					std::cout << "|" << std::setw(10) << Contacts[i].Get_Nickname() << "|" << std::endl;
				std::cout << "|__________|__________|__________|__________|" << std::endl;
			}
			std::cout << "Witch index do you want ?" << std::endl;
			std::getline(std::cin, str);
			if (!std::cin)
			{
				std::cout << "ctrl D" << std::endl;
				exit(0);
			}
			if (std::isdigit(str[0]))
			{
				if (std::atoi(str.c_str()) >= 0 && std::atoi(str.c_str()) < j)
					Contacts[std::atoi(str.c_str())].Display_Contact();
				else
					std::cout << "it doesn't exist" << std::endl;
			}
			else
				std::cout << "unknown index" << std::endl;
		}
}
