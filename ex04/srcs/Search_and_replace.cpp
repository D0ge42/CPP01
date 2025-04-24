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
	ofstream.open(outfile.c_str(), std::ofstream::out);
	if (instream.is_open() == false)
	{
		std::cerr << "Error in opening the input file!" << '\n';
		return;
	}
	while(std::getline(instream,stash))
		res += replace_in_line(stash,search,replace);
	ofstream << res;
}

std::string Search_And_Replace::replace_in_line(std::string line,std::string to_search, std::string replace )
{
	std::string res;
	int line_length = line.length();
	if (to_search.length() == 0)
	{
		return line;
	}
	for (int i = 0; i < line_length; i++)
	{
		if (line.compare(i,to_search.length(),to_search) == 0x0)
		{
			res+=replace;
			i+=to_search.length() - 1;
		}
		else
			res += line[i];

	}
	return res+='\n';
}

void Search_And_Replace::print_file_content(std::string file)
{

	std::ifstream stream;
	std::string stash;
	file += ".replace";
	stream.open(file.c_str());
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

