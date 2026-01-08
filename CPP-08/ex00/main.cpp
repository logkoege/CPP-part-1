#include "easyfind.hpp"
#include <vector>

std::vector<int> vec;

int main()
{
	std::string str = "cppacpp";

	std::cout << "return index of the charactere" << std::endl;
	std::cout << std::distance(str.begin(), easyfind(str, 'a')) << std::endl;

	std::cout << "return length if not found" << std::endl;
	std::cout << std::distance(str.begin(), easyfind(str, 'z')) << std::endl << std::endl;

	std::vector<int> tab;
	tab.push_back(1);
	tab.push_back(3);
	tab.push_back(5);
	tab.push_back('a');
	tab.push_back(4);

	std::cout << "return index of the charactere" << std::endl;
	std::cout << std::distance(tab.begin(), easyfind(tab, 1)) << std::endl;

	std::cout << "return length if not found" << std::endl;
	std::cout << std::distance(tab.begin(), easyfind(tab, 9)) << std::endl;

	return 1;
}