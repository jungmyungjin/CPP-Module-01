//
// Created by 정명진 on 2021/11/09.
//

#include "HumanA.hpp"

HumanA::HumanA(std::string _name, Weapon& _weapon)
{
	name_ = _name;
	weapon_type_ = _weapon.getType();
}

void HumanA::attack(void)
{
	std::cout << name_ << " attacks with his " << weapon_type_ << std::endl;
}