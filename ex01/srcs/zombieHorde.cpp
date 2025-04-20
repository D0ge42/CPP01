#include <cctype>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <string>
#include "Zombie.hpp"

/*In this module we use new but with a specified size, meaning its gonna
 * allocate spaces for N types of elements.
 * In our case its gonna dinamically allocate N zombie objects on the heap memory.
 * */

Zombie* zombieHorde(int N, std::string name)
{
	Zombie *horde;
	horde = new Zombie[N];
	if (horde == NULL)
		return NULL;
	for (int i = 0; i < N; i++)
	{
		horde[i].setName(name);
		horde[i].announce();
	}
	return horde;
}
