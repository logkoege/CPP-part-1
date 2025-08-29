#pragma once

# include <string>
# include <iostream>

class Weapon
{
private:
	std::string type;
public:
	Weapon();
	Weapon(std::string str);
	~Weapon();
	std::string& getType();
	void setType(std::string str);
};
