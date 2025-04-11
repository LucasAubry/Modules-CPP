#include "span.hpp"

span::span(unsigned int N) {};
span::~span() {};

void span::addNumber(int num)
{
	if (this->N == this->_tab.size())
		throw std::runtime_error("addNumber : error tab is full");
	else
		_tab.push_back(num);
}
