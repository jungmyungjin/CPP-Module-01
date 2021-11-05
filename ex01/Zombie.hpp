//
// Created by 정명진 on 2021/11/04.
//

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

		Zombie(void);
		~Zombie(void);

	private:
	// zombie 이름
		std::string name_;
};

Zombie* zombieHorde( int N, std::string name );

#endif //EX00_ZOMBIE_HPP
