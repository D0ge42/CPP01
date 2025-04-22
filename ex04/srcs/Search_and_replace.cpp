#include <algorithm>
#include <cstring>
#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <istream>
#include <iterator>
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

void Search_And_Replace::search_and_replace(const char *in, std::string search, std::string replace, const char *output)
{

	std::string stash;
	std::ifstream instream;
	instream.open(in, std::ifstream::in);
	if (instream.is_open() == false)
	{
		std::cerr << "Error in opening the input file!" << '\n';
		return;
	}
	while(std::getline(instream,stash))
		replace_in_line(stash,search,replace, output);
}

void Search_And_Replace::replace_in_line(std::string line,std::string to_search, std::string replace, const char *output)
{
	std::string res;
	std::ofstream outstream;
	outstream.open(output, std::fstream::out | std::ofstream::trunc );
	if (to_search.length() == 0)
	{
		outstream << line;
		return;
	}
	if (outstream.is_open() == false)
	{
		std::cerr << "Error in opening output file";
		return;
	}
	int line_lenght = line.length();
	for (int i = 0; i < line_lenght; i++)
	{
		if (line.compare(i,to_search.length(),to_search) == 0x0)
		{
			res+=replace;
			i+=to_search.length() - 1;
		}
		else
			res += line[i];

	}
	outstream << res;
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

