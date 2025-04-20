#ifndef __HUMANB_HPP__ 
#define __HUMANB_HPP__

#include <string>
#include "Weapon.hpp"

/*In this case weapon is  a pointer to a weapon class.
 * The set weapon method takes a reference to a weapon class 
 * its param.
 * Now when we do set weapon, we'll have a pointer
 * to a reference.
 * this->_weapon = &weapon */

class HumanB
{
	private:
		Weapon *_weapon;
		std::string _name;
	public:
		HumanB(std::string name);
		~HumanB();
		void attack();
		void setWeapon(Weapon &weapon);
};

#endif

