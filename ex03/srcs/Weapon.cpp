#include <string>
#include <iostream>
#include "Weapon.hpp"

Weapon::Weapon()
{}

Weapon::~Weapon()
{}

Weapon::Weapon(std::string name)
{
	this->type = name;
}

std::string Weapon::getType()
{
	return 	this->type;
}

void Weapon::setType(std::string type)
{
	this->type = type;
}

