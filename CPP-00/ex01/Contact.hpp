/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 16:17:17 by logkoege          #+#    #+#             */
/*   Updated: 2025/08/19 15:51:42 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <string>
# include <iostream>

class	Contact
{
	private:

	std::string	First_Name;
	std::string	Last_Name;
	std::string Nickname;
	std::string	Phone_Number;
	std::string Darkest_Secret;

	public:

	int		Get_Number();
	void	Set_Contact();
	void	Display_Contact();
	std::string	Test_Error(std::string str);
	std::string	Get_First_Name();
	std::string	Get_Last_Name();
	std::string	Get_Nickname();
	std::string	Get_Phone_Number();
	std::string	Get_Darkest_Secret();
	

};

#endif