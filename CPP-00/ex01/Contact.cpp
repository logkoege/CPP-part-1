/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 16:18:55 by logkoege          #+#    #+#             */
/*   Updated: 2025/08/19 16:37:03 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"

std::string	Contact::Test_Error(std::string str)
{
	long unsigned int i = 0;
	std::getline(std::cin, str);
	while(str.empty())
	{	
		if (!std::cin)
		{
			std::cout << "ctrl D" << std::endl;
			exit(0);
		}
		std::cout << "You can't put empty string" << std::endl;
		std::getline(std::cin, str);
	}
	while (i < str.size())
	{
		if (str[i] == '\t')
			str[i] = ' ';
		i++;
	}
	return (str);
}

void	Contact::Set_Contact()
{
	Nickname.clear();
	Phone_Number.clear();
	Darkest_Secret.clear();
	std::cout << "First Name :" << std::endl;
	First_Name = Test_Error(First_Name);
	if (!std::cin)
	{
		std::cout << "ctrl D" << std::endl;
		exit(0);
	}
	std::cout << "Last Name :" << std::endl;
	Last_Name = Test_Error(Last_Name);
	if (!std::cin)
	{
		std::cout << "ctrl D" << std::endl;
		exit(0);
	}
	std::cout << "Nickname :" << std::endl;
	Nickname = Test_Error(Nickname);
	if (!std::cin)
	{
		std::cout << "ctrl D" << std::endl;
		exit(0);
	}
	std::cout << "Phone number :" << std::endl;
	Phone_Number = Test_Error(Phone_Number);
	if (!std::cin)
	{
		std::cout << "ctrl D" << std::endl;
		exit(0);
	}
	std::cout << "Darkest Secret :" << std::endl;
	Darkest_Secret = Test_Error(Darkest_Secret);
	if (!std::cin)
	{
		std::cout << "ctrl D" << std::endl;
		exit(0);
	}
}

void	Contact::Display_Contact()
{
	std::cout << "First Name     -> " << First_Name << std::endl;
	std::cout << "Last Name      -> " << Last_Name << std::endl;
	std::cout << "Nickname       -> " << Nickname << std::endl;
	std::cout << "Phone Number   -> " << Phone_Number << std::endl;
	std::cout << "Darkest Secret -> " << Darkest_Secret << std::endl;
}

std::string Contact::Get_First_Name()
{
	return First_Name;
}

std::string Contact::Get_Last_Name()
{
	return Last_Name;
}

std::string Contact::Get_Nickname()
{
	return Nickname;
}

std::string Contact::Get_Phone_Number()
{
	return Phone_Number;
}

std::string Contact::Get_Darkest_Secret()
{
	return Darkest_Secret;
}
