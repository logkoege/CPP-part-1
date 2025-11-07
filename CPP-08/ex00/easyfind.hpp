#pragma once

#include <iostream>
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T &tab, int num)
{
	return std::find(tab.begin(), tab.end(), num);
}