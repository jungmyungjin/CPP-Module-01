//
// Created by 정명진 on 2021/11/09.
//

#ifndef HUMANA_H
#define HUMANA_H

#include "Weapon.hpp"
/*
 * < HumanA >
 * - HumanA는 생성자에서 Weapon을 사용한다.
 * - HumanA는 항상 무장하고 있다.
 */
class HumanA{
public:
	HumanA(std::string _name, Weapon& _type);
	void attack(void);
private:
	std::string name_;
	std::string weapon_type_;
};

#endif
