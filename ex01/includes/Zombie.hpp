#ifndef __ZOMBIE_HPP__ 
#define __ZOMBIE_HPP__

#include <string>

class Zombie
{
	private:
		std::string _name;
	public:
		Zombie();
		Zombie(std::string name);
		~Zombie();
		void announce(void);
		void nameZombies(Zombie *zombie);
		void setName(std::string name);
};

#endif

