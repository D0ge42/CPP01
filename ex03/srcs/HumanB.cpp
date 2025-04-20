#include "HumanB.hpp"
#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>


HumanB::HumanB(std::string name)
{
	this->_name = name;
}

HumanB::~HumanB()
{}

/*This function takes a reference as parameter.
 * Since weapon is a pointer tho we must take the address of the reference.
 * Once we've the address, we can assign it to the _weapon pointer.
 * 
 * Why is this not working if instead of a pointer to weapon as private attribute
 * we only take a weapon class and modifi the code accordingly?
 * */


void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void HumanB::attack()
{
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << '\n';
}
