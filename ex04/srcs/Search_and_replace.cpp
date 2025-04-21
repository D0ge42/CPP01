#include <iostream>
#include <cstdlib>
#include <istream>
#include <string>
#include <fstream>
#include "Search_And_Replace.hpp"

/* Search and replace function */

void Search_And_Replace::search_and_replace(const char *in, std::string search, std::string replace, const char *output)
{

	std::string stash;
	std::ifstream instream;
	std::ofstream outstream;
	instream.open(in, std::fstream::in);
	outstream.open(output, std::fstream::out);
	if (instream.is_open() == false)
	{
		std::cerr << "Error in opening the input file!" << '\n';
		return;
	}
	if (outstream.is_open() == false)
	{
		std::cerr << "Error in opening output file";
		return;
	}
	while(std::getline(instream,stash))
	{
		if (stash.compare(search) == 0x0)
			outstream << replace << (char)0x0a ;
		else
			outstream << stash << (char)0x0a ;
	}
}

void Search_And_Replace::print_file_content(const char *file)
{

	std::ifstream stream;
	std::string stash;
	stream.open(file);
	if (stream.is_open() == false)
	{
		std::cerr << "Couldn't open outfile after replacing" << '\n';
		exit(EXIT_FAILURE);
	}
	while(std::getline(stream,stash))
		std::cout << stash << '\n';
}


/* Constructors / Destructors */

Search_And_Replace::Search_And_Replace(std::string search, std::string replace):_search(search),_replace(replace)
{}

Search_And_Replace::~Search_And_Replace()
{}

Search_And_Replace::Search_And_Replace()
{}

/* Setters and getters */

void Search_And_Replace::setReplace(std::string replace)
{
	this->_replace = replace;
}

void Search_And_Replace::setSearch(std::string search)
{
	this->_search = search;
}

void Search_And_Replace::setIn(const char *in)
{
	this->_in = in;
}

void Search_And_Replace::setOut(const char *out)
{
	this->_out = out;
}

