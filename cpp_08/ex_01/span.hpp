#pragma once

#include <vector>
#include <iostream>
#include <vector>
#include <algorithm> //min element et max eleement 
#include <stdexcept> //runtime error

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
