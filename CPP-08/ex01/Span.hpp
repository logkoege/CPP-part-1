#pragma once

#include <vector>
#include <algorithm>
#include <iostream>
#include <exception>

class Span
{
	private :
	unsigned int N;
	public :
		std::vector<int> victor;
		void addNumber(int num);
		int shortestSpan();
		int longestSpan();
		Span();
		~Span();
		Span(int n);
		//copy
		//=

		template<typename T>
		void insertt(T begin, T end)
		{
			if (this->victor.size() + std::distance(begin, end) > N)
				throw std::exception();
			std::cout << this->N << " <--- N" << std::endl;
			std::cout << this->victor.size() + std::distance(begin, end) << " <--- nombre qui dois etre <= que N" <<std::endl;
			this->victor.insert(this->victor.end(), begin, end);
		}
};


