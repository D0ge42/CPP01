#ifndef __HUMANA_HPP__ 
#define __HUMANA_HPP__

#include <string>
#include "Weapon.hpp"

class HumanA
{
	private:
		Weapon &_weapon;
		std::string _name;
	public:
		HumanA();
		HumanA(std::string name,Weapon &weapon);
		~HumanA();
		void attack();
};

#endif

