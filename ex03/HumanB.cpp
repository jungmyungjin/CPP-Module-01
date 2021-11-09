//
// Created by 정명진 on 2021/11/09.
//

#include "HumanB.hpp"

HumanB::HumanB(std::string _name)
{
	name_ = _name;
}

void HumanB::setWeapon(Weapon& _weapon)
{
	weapon_type_ = _weapon.getType();
}

void HumanB::attack(void)
{
	std::cout << name_ << " attacks with his " << weapon_type_ << std::endl;
}