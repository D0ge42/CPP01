#include <cstdlib>
#include <iostream>
#include <ostream>
#include <string>
#include <fstream>
#include "Harl.hpp"

int main(int ac, char **av)
{
	Harl harl;
	if (ac != 2)
		return 0;
	harl.complain(av[1]);
}
