#include <cstdlib>
#include <iostream>
#include <ostream>
#include <string>
#include "Search_And_Replace.hpp"

int main(int ac, char **av)
{
	Search_And_Replace SAP;
	if (ac != 0x4)
		return 0x0;

	// Input file does not exist test.
	// Should print on stderr "Error in opening the file."
	std::cout << '\n';
	std::cout << "----------------------------------------------" << '\n';
	std::cout << "Executing 'input file does not exist' test" << '\n';
	SAP.search_and_replace("123",av[2],av[3]);
	std::cout << "----------------------------------------------" << '\n';
	std::cout << "\n\n";
	//
	// Normal test.
	// Should replace occurences of av[2] with av[3].
	// else just copy as it is.
	// Should output the result into out file.
	
	std::cout << "----------------------------------------------" << '\n';
	std::cout << "Executing 'normal' test" << (char)0xa;
	std::cout << "Replacing all occurences of " << av[2] << " with " << av[3] << " inside " << av[1] << '\n';
	std::cout << "----------------------------------------------" << '\n';
	SAP.search_and_replace(av[1],av[2],av[3]);
	std::cout << '\n';
	std::cout << "Output of normal test:" << '\n';
	SAP.print_file_content(av[1]);
	std::cout << "\n\n";

	// Like a normal test but with empty arguments to replace.
	// Shouldn't replace anything and print the file as it is.
	//
	std::cout << "----------------------------------------------" << '\n';
	std::cout << "Executing 'empty arguments' test: " << (char)0xa;
	std::cout << "Replacing all occurences of " << "''" << " with " << "''" << " inside " << av[1] << '\n';
	std::cout << "----------------------------------------------" << '\n';
	SAP.search_and_replace(av[1],"","");
	std::cout << '\n';
	std::cout << "Output of 'empty arguments' test: " << '\n';
	SAP.print_file_content(av[1]);
	std::cout << "\n\n";
	//
}
