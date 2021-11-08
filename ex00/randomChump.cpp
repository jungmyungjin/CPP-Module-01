//
// Created by 정명진 on 2021/11/04.
//

#include "Zombie.hpp"

// 좀비를 생성하고 스스로 알리게 하는 함수
void randomChump(std::string name)
{
	Zombie *new_one;
	new_one = newZombie(name);
	delete new_one;
}
