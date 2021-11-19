/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjung <mjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 19:51:40 by mjung             #+#    #+#             */
/*   Updated: 2021/11/19 20:13:05 by mjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// 좀비를 생성하고 스스로 알리게 하는 함수
void randomChump(std::string name)
{
	Zombie *new_one;
	
	new_one = newZombie(name);
	new_one->announce();
	delete new_one;
}
