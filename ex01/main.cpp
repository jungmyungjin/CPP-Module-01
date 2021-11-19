/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjung <mjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 19:52:27 by mjung             #+#    #+#             */
/*   Updated: 2021/11/19 20:20:20 by mjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *horde;
	int count = 3;
	
	horde = zombieHorde(count, "monster");
	for(int i=0; i<count; i++)
	{
		horde->announce();
	}
	delete[] horde;

	return (0);
}