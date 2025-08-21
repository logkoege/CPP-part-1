/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 13:48:23 by logkoege          #+#    #+#             */
/*   Updated: 2025/05/21 17:55:38 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>



class Zombie
{
private:
	std::string name;

public:
	Zombie* zombieHorde(int N, std::string name);
	void	announce();
	void	setname(std::string name);
};	


#endif