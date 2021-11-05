//
// Created by 정명진 on 2021/11/04.
//
#include "Zombie.hpp"

int main(void)
{
	Zombie *horde;
	int n = 3;
	horde = zombieHorde( n, "mo-gi" );

	for (int i=0; i<n; i++)
		horde[i].announce();

	delete[] horde;

	return (0);
}