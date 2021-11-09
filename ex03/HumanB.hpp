//
// Created by 정명진 on 2021/11/09.
//

#ifndef HUMANB_H
#define HUMANB_H
/*
 * < HumanB >
 * - HumanB는 생성자에서 Weapon을 사용한다.
 * - HumanB는 항상 무장하고 있다.
 */
#include "Weapon.hpp"

class HumanB{
public:
	HumanB(std::string _name);
	void setWeapon(Weapon& _weapon);
	void attack(void);

private:
	std::string name_;
	std::string weapon_type_;
};
#endif
