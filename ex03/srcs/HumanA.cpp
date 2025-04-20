#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>

/*By passing and initializing a reference to the weapon, even if the weapon type change
 * we'll always display the right value since now HumanA holds a reference to the initial
 * weapon.*/

HumanA::HumanA(std::string name, Weapon &weapon):_weapon(weapon),_name(name)
{}

HumanA::~HumanA()
{}

void HumanA::attack()
{
	std::cout << this->_name << " attacks with their " << this->_weapon.getType() << '\n';
}
