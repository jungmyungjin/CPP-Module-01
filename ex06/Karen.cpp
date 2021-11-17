#include "Karen.hpp"

/*
 * 학습 목표 => 맴버 함수에 대한 포인터를 사용하자.
 * < 불평 불만 많은 "Karen"을 클래스로 구현하기 ! >
 * - if / elseif / else를 사용하지 않고 불평해야 한다.
 */

//										public
// private 함수를 호출함
// if / elseif / else를 사용하지 않고 호출하도록 해야한다.
void Karen::complain(std::string level)
{
	bool check_level = false;

	for (int i = 0; i < 4 ; i++)
	{
		if (check_level || stat[i].name == level)
		{
			(this->*(stat[i].ptr))();
			check_level = true;
		}
	}
	if (check_level == false)
		etc();

}

Karen::Karen(void)
{
	init();
}

void Karen::init(void)
{
	stat[0].name = "DEBUG";
	stat[0].ptr = &Karen::debug;
	stat[1].name = "INFO";
	stat[1].ptr = &Karen::info;
	stat[2].name = "WARNING";
	stat[2].ptr = &Karen::warning;
	stat[3].name = "ERROR";
	stat[3].ptr = &Karen::error;
}

void Karen::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl << std::endl;
}

void Karen::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl << std::endl;
}

void Karen::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl << std::endl;
}

void Karen::error(void)
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl << std::endl;;
}

void Karen::etc(void)
{
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}