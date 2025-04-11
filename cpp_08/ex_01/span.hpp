#pragma once

#include <vector>

class Span
{
	private :
		std::vector<int> _tab;
		unsigned int _N;
	
	public :
		Span(unsigned int N);
		~Span();

		void set_tab(unsigned int N)
		{
			this->_tab.resize(N);
		}

		void addNumber(int num);	
}
