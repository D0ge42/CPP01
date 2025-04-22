#ifndef __SEARCH_AND_REPLACE_HPP__
#define __SEARCH_AND_REPLACE_HPP__

#include <fstream>
#include <istream>
#include <string>
#include <iostream>

class Search_And_Replace
{
	private:
		std::string _search;
		std::string _replace;
		const char *_in;
		const char *_out;

	public:
		Search_And_Replace();
		Search_And_Replace(std::string search, std::string replace);
		~Search_And_Replace();
		void print_file_content(const char *file);
		void replace_in_line(std::string line, std::string to_search, std::string replace, const char *output);
		void search_and_replace(const char *in, std::string search, std::string replace, const char  *out);

};
#endif

