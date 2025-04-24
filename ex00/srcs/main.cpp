#include <cctype>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#include "Zombie.hpp"

/*In which case is it better to allocate zombies on the stack for the heap.
 Answer: Zombies allocated on the stack are limited to a specific scope, while 
 zombies allocated on the heap can be used outside of the function scope.
 */

int main()
{
	Zombie *zombie;
	zombie = new Zombie("Pope Francisc");
	if (zombie == NULL)
		return;
	zombie->announce();
	randomChump("Homeless zombie");
	delete zombie;
	return 0;
}
