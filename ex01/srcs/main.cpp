#include <cctype>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <string>
#include "Zombie.hpp"
#include "Zombie.h"

/*In which case is it better to allocate zombies on the stack for the heap.
 Answer: Zombies allocated on the stack are limited to a specific scope, while 
 zombies allocated on the heap can be used outside of the function scope.
 */

int main()
{
	Zombie *horde = zombieHorde(10, "Zombie");
	if (horde == NULL)
		return (0);
	delete[] horde;
	return 0;
}
