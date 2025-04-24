#include "inttypes.h"
#include "Harl.hpp"

Harl::Harl()
{}

Harl::~Harl()
{}

void Harl::complain(std::string level_id)
{
	uint_least8_t index = 0;
	std::string levels[4] = {"INFO","DEBUG","WARNING","ERROR"};
	while(index < 4)
	{
		if (levels[index] == level_id)
			break;
		index++;
	}
	switch (index)
	{
		case 0:
			this->info();
		case 1:
			this->debug();
		case 2:
			this->warning();
		case 3:
			this->error();
		default:
			std::cout << "[ Probably complaining about insignificant problems ]";
			break;
	}
	

}

void Harl::info()
{
	std::cout << "[INFO] I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n\n" << std::flush;
}

void Harl::debug()
{
	std::cout << "[DEBUG]: I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!\n\n" << std::flush; 
}

void Harl::warning()
{
	std::cout << "[WARNING]: I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month.\n\n" << std::flush;
}
void Harl::error()
{
	std::cout <<  "[ERROR]: This is unacceptable! I want to speak to the manager now.\n\n" << std::flush;
}
