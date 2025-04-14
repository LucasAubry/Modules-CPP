#pragma once

#include <vector>
#include <iostream>

class Span
{
	private :
		std::vector<int> _tab;
		unsigned int _N;
	
	public :
		Span(unsigned int N);
		~Span();

		void addNumber(int num);
		int shortestSpan();
		int longestSpan();
};
