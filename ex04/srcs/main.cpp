#include <iostream>
#include <string>
#include <fstream>
#include "Search_And_Replace.hpp"

int main(int ac, char **av)
{
	Search_And_Replace SAP;
	if (ac != 0x4)
		return 0x0;
	const char *out = "srcs/out.replace";
	SAP.search_and_replace(av[1],av[2],av[3],out);
}
