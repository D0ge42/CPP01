#include <stdio.h>
#include <cstring>
#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <string>
#include <fstream>
#include "Search_And_Replace.hpp"

/* Search and replace function */

/* What's a stream? It an abstraction that represents a device,
 * on which input and output operations are performed.
 * Its a source or destination of characters of indefinite lenght.
 * 
 * Since we're dealing with files we'll be used the ifstream/ofstream classes.
 * This way we can easily read and write onto files.
 * */

void Search_And_Replace::search_and_replace(const char *in, std::string search, std::string replace)
{

	std::string stash;
	std::ifstream instream;
	std::ofstream ofstream;
	std::string res;
	instream.open(in, std::ifstream::in);
	if (instream.is_open() == false)
	{
		std::cerr << "Error in opening the input file!" << '\n';
		return;
	}
	std::string outfile = in;
	outfile += ".replace";
	ofstream.open(outfile.c_str(), std::ofstream::out | std::_S_trunc );
	if (ofstream.is_open() == false)
	{
		std::cerr << "Error in opening the output file!" << '\n';
		instream.close();
		return;
	}
	while(std::getline(instream,stash))
		res += replace_in_line(stash,search,replace);
	ofstream << res;
}

/* To find the substring inside line we use the find method.
 * Find method returns the index at which the substring was found.
 * If no substring is found it return npos(18446744073709551615UL)
 * It will erase a certain amount of characters equals to search.lenght()
 * Insert a string at the same index.
 * And then it will keep searching again for eventual others occurences of that substring.*/

std::string Search_And_Replace::replace_in_line(std::string line,std::string to_search, std::string replace )
{
	if (to_search.length() == 0)
		return line+='\n';
	size_t idx = line.find(to_search,0x0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000);
	while (idx != 18446744073709551615UL)
	{
		line.erase(idx,to_search.length());
		line.insert(idx,replace);
		idx = line.find(to_search,idx + sizeof(replace));
	}
	return line+='\n';
}

void Search_And_Replace::print_file_content(std::string file)
{

	std::ifstream stream;
	std::string stash;
	file += ".replace";
	stream.open(file.c_str(), std::ifstream::in);
	if (stream.is_open() == false)
	{
		std::cerr << "Couldn't open file to read" << '\n';
		exit(EXIT_FAILURE);
	}
	while(std::getline(stream,stash))
		std::cout << stash << '\n';
}

/* Constructors / Destructors */

Search_And_Replace::~Search_And_Replace()
{}

Search_And_Replace::Search_And_Replace()
{}

