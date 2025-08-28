#pragma once 

#include <iostream>
#include <string>

class Harl
{
	private :
		typedef void(Harl::*FtHarl)(void);
		struct HarlTab
		{
			std::string level;
			FtHarl	ft;
		};
		void debug(void);
		void info(void);
		void warning(void);
		void error(void);
	public:
		void complain(std::string level);
};