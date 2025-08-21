/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 13:48:26 by logkoege          #+#    #+#             */
/*   Updated: 2025/05/21 16:45:50 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie* zombieHorde( int N, std::string name)
{
	Zombie *horde = new Zombie[N];
	for(int i = 0; i < N; ++i)
		horde[i].setname(name);
	return horde;
}
void	Zombie::setname(std::string name)
{
	this->name = name;
}