#pragma once
#include <string>

class Search_And_Replace
{

	public:
		Search_And_Replace();
		~Search_And_Replace();
		void print_file_content(std::string file);
		std::string replace_in_line(std::string line, std::string to_search, std::string replace);
		void search_and_replace(const char *in, std::string search, std::string replace);

};

