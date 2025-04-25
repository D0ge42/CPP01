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
 * Q:Why is this not working if instead of a pointer to weapon as private attribute
 * we only take a weapon class and modify the code accordingly?
 * A:Because it would only modify the weapon in the local scope of the setWeapon function.
 * Also, we've to pass a pointer cause the subject specify that HumanB cannot have a weapon as 
 * its constructor parameter. That mean we cannot use a reference since a reference needs
 * to be decleared and initialized.
 * */


void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

void HumanB::attack()
{
	std::cout << this->_name << " attacks with their " << this->_weapon->getType() << '\n';
}
