#pragma once

#include <iostream>
#include <string>

template <typename T>
T	min(T first, T sec)
{
	if (first > sec)
		return (sec);
	return (first);
}

template <typename T>
T	max(T first, T sec)
{
	if (first > sec)
		return (first);
	return (sec);
}

template <typename T>
void	swap(T &first, T &sec)
{
	T temp;

	temp = first;
	first = sec;
	sec = temp;
}
