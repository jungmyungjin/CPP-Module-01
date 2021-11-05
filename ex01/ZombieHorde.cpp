//
// Created by 정명진 on 2021/11/06.
//

#include "Zombie.hpp"

/*
 * N마리의 Zombie 객체를 할당하는 함수를 만든다.
 * 1. N말미의 좀비들은 한번에 할당 되어야 한다.
 * 2. 각 좀비들은 각각 이름을 부여하면서 초기화 해주어야 한다.
 * 3. 마지막으로 첫번쨰 좀비의 주소값을 리턴한다.
 */

Zombie* zombieHorde( int N, std::string name )
{
	Zombie *zombie_horde = new Zombie[N];

	for (int i=0; i<N; i++)
	{
		zombie_horde[i].set_name(name);
	}
	return (zombie_horde);
}