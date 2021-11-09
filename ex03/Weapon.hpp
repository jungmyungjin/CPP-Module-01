//
// Created by 정명진 on 2021/11/09.
//

#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <string>

class Weapon
{
public:
	std::string getType(void);
	void setType(std::string _name);

	Weapon(std::string _name);

private:
	std::string weapon_;

};

#endif //EX03_WEAPON_H
