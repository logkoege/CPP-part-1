/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: logkoege <logkoege@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 18:01:36 by logkoege          #+#    #+#             */
/*   Updated: 2025/05/20 18:42:51 by logkoege         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>
# include <iostream>


class Zombie {
private:
	std::string name;

public:
	Zombie(std::string name);
	~Zombie();
	void announce();
	
	static Zombie* newZombie(std::string name); // heap
	static void randomChump(std::string name); // stack
};

#endif
