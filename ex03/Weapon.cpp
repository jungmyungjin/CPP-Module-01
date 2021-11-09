//
// Created by 정명진 on 2021/11/09.
//

#include "Weapon.hpp"

Weapon::Weapon(std::string _weapon_name)
{
	weapon_ = _weapon_name;
}

std::string Weapon::getType(void)
{
	return (weapon_);
}

void Weapon::setType(std::string _weapon_name)
{
	weapon_ = _weapon_name;
}