/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjung <mjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 20:22:40 by mjung             #+#    #+#             */
/*   Updated: 2021/11/19 20:23:11 by mjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
