/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 21:27:36 by logkoege          #+#    #+#             */
/*   Updated: 2025/08/19 15:51:09 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <iomanip>
# include "Contact.hpp"
# include <cstring>
# include <cstdlib>
# include <string>

class	Phonebook
{
	private:
		int		j;
		Contact	Contacts[8];
		int		ContactCount;

	public:
		Phonebook();
		void	ADD_Contact();
		void	Display_Contact();
		void	Search_Contact();
};
