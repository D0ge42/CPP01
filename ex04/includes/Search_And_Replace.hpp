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
		void setIn(const char *in);
		void setOut(const char *out);
		void setSearch(std::string type);
		void setReplace(std::string type);
		void search_and_replace(const char *in, std::string search, std::string replace, const char  *out);
};

#endif

