#ifndef WEAPOND_HPP
# define WEAPOND_HPP

# include <string>
# include <iostream>

class Weapon
{
private:
	std::string type;
public:
	Weapon(std::string str);
	~Weapon();
	std::string& getType();
	void setType(std::string str);
};
#endif