#include <cctype>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <iomanip>
#include <iostream>
#include <string>
#include "Zombie.hpp"
//
void randomChump(std::string name)
{
	Zombie zombie(name);
	zombie.announce();
}
