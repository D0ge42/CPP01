#ifndef __WEAPON_HPP__ 
#define __WEAPON_HPP__

#include <string>


class Weapon
{
	private:
		std::string type;
	public:
		Weapon();
		Weapon(std::string type);
		~Weapon();
		std::string getType();
		void setType(std::string type);
};

#endif

