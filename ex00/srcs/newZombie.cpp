#include <cctype>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>
#include "Zombie.hpp"

/*The new operator requests for the allocation of the block of memory
 * of the given size of type on the Free Store.
 * This is the part of the heap memory available for new operator.
 * If sufficent memory is available a new operator initializes the memory
 * to the default value according to its type and return an address to the this newly
 * allocated memory.*/

Zombie* newZombie(std::string name)
{
	Zombie *zazombie;
	zazombie = new Zombie(name);
	return zazombie;
}
