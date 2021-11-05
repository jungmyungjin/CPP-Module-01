//
// Created by 정명진 on 2021/11/04.
//

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

#endif //EX00_ZOMBIE_HPP
