/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 13:48:17 by logkoege          #+#    #+#             */
/*   Updated: 2025/05/26 15:54:37 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name);

int	main(void)
{
	Zombie *horde = zombieHorde(5, "abderzombie");
	horde->announce();
	delete [] horde;

	return (0);
}