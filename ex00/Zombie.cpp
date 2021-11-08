//
// Created by 정명진 on 2021/11/04.
//

#include "Zombie.hpp"

// 좀비의 이름을 포함한 디버깅 메시지를 소멸자에 추가한다.
void Zombie::announce(void)
{
	std::cout << "<" << name_ << "> " << "BraiiiiiiinnnzzzZ" << std::endl;
}

// 생성자
Zombie::Zombie(std::string _name)
{
	name_ = _name;
}

// 소멸자
Zombie::~Zombie(void)
{
	announce();
}
