#include <cctype>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <string>
#include <iostream>
#include "Zombie.hpp"

/*Standard constructor of the Contact Class*/
Zombie::Zombie()
{}

/*Destructor of the class*/

Zombie::Zombie(std::string name)
{
	this->_name = name;
}

Zombie::~Zombie()
{
	std::cout << this->_name << ":" << "is about to die.." << '\n';
}

void Zombie::announce()
{
	std::cout << this->_name << ":" << "BraiiiiiiinnnzzzZ..." << '\n';
}

/*Getters and setters*/

void Zombie::setName(std::string name)
{
	this->_name = name;
}
