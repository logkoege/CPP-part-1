#pragma once

#include <string>
#include <iostream>

template <typename T, typename U, typename V>
void	iter(T &str, const U size, V f)
{
	for (int i = 0; i < size; i++)
		f(str[i]);
}