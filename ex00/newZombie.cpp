//
// Created by 정명진 on 2021/11/04.
//

#include "Zombie.hpp"

/*
 *  < 해야할 일 >
 *  - 좀비 생성
 *  - 좀비 이름 설정
 *  - 코드의 다른 위치에서 사용하도록 반환
 */
Zombie* newZombie(std::string name)
{
	Zombie *new_one;
	new_one = new Zombie(name);
	return new_one;
}
