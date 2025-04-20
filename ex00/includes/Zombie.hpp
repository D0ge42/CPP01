#ifndef __ZOMBIE_HPP__ 
#define __ZOMBIE_HPP__

#include <cctype>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <string>

class Zombie
{
	private:
		std::string _name;
	public:
		void announce(void);
		Zombie();
		Zombie(std::string name);
		~Zombie();
};

void	randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif

