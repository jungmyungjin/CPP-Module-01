/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjung <mjung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 20:45:19 by mjung             #+#    #+#             */
/*   Updated: 2021/11/19 21:03:22 by mjung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

/*
 * 학습 목표 => 맴버 함수에 대한 포인터를 사용하자.
 * < 불평 불만 많은 "Karen"을 클래스로 구현하기 ! >
 */

void Karen::complain(std::string _level)
{
	for (int i = 0; i < 4 ; i++)
	{
		if (stat[i].name == _level)
		{
			(this->*(stat[i].ptr))();
		}
	}
}

Karen::Karen(void)
{
	init();
}

void Karen::init(void)
{
	stat[0].name = "debug";
	stat[0].ptr = &Karen::debug;
	stat[1].name = "info";
	stat[1].ptr = &Karen::info;
	stat[2].name = "warning";
	stat[2].ptr = &Karen::warning;
	stat[3].name = "error";
	stat[3].ptr = &Karen::error;
}

void Karen::debug(void)
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info(void)
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error(void)
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;

}
