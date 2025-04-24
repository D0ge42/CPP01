#ifndef __HARL_HPP_
#define __HARL_HPP_

#include <fstream>
#include <istream>
#include <string>
#include <iostream>

class Harl
{
	private:
		void debug();
		void info();
		void warning();
		void error();

	public:
		Harl();
		~Harl();
		void complain(std::string level);
};

#endif

