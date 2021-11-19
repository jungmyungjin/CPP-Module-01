/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjung <mjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 20:06:40 by mjung             #+#    #+#             */
/*   Updated: 2021/11/19 20:19:58 by mjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <sstream> //std::stringstream

class Zombie
{
	public:
		void announce(void);
		void set_name(std::string _name);

		~Zombie(void);

	private:
	// zombie 이름
		std::string name_;
};

Zombie* zombieHorde( int N, std::string name );

#endif
