#include <cstring>
#include "inttypes.h"
#include <iostream>
#include <cstdlib>
#include <ostream>
#include <unistd.h>
#include "Harl.hpp"

Harl::Harl()
{}

Harl::~Harl()
{}

void Harl::complain(std::string level)
{
	uint_least8_t clvl = 0;
	std::string levels[4] = {"DEBUG","INFO","WARNING","ERROR"};
	while(clvl < 4)
	{
		if (levels[clvl] == level)
			break;
		clvl++;
	}
	switch (clvl)
	{
		case 0:
			debug();
			// fall through
		case 1:
			info();
			// fall through
		case 2:
			warning();
			// fall through
		case 3:
			error();
			// fall through
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
}

void Harl::info()
{
	std::cout << "Info: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n\n" << std::flush;
}

void Harl::debug()
{
	std::cout << "Debug: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n\n" << std::flush; 
}

void Harl::warning()
{
	std::cout << "Warning: I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month.\n\n" << std::flush;
}
void Harl::error()
{
	std::cout <<  "Error: This is unacceptable! I want to speak to the manager now.\n\n" << std::flush;
}
