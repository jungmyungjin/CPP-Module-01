/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjung <mjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 19:51:59 by mjung             #+#    #+#             */
/*   Updated: 2021/11/19 19:52:07 by mjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
	public:
		void announce(void);

		Zombie(std::string _name);
		~Zombie(void);

	private:
	// zombie 이름
		std::string name_;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif