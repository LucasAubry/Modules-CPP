#include "span.hpp"

Span::Span(unsigned int N)
{
	this->_N = N;
};
Span::~Span() {};

void Span::addNumber(int num)
{
	if (this->_tab.size() >= this->_N)
		throw std::runtime_error("addNumber : error tab is full");
	this->_tab.push_back(num);
}

int Span::shortestSpan()
{
	int dis = 0;
	
	if (_tab.size() == 0 || _tab.size() == 1)
		throw std::runtime_error("shortestSpan : error no number in tab");
	for (size_t i = 0; i < this->_tab.size(); i++)
	{
		if (_tab[i] > _tab[i+1])
		{
			if (dis > this->_tab[i] - this->_tab[i+1])
				dis = this->_tab[i] - this->_tab[i+1];
		}
		else if (dis > this->_tab[i+1] - this->_tab[i])
			dis = this->_tab[i+1] - this->_tab[i];
	}
	return (dis);
}

int Span::longestSpan()
{
	int dis = 0;

	if (_tab.size() == 0 || _tab.size() == 1)
		throw std::runtime_error("longestSpan : error no number in tab");
	for (size_t i = 0; i < this->_tab.size(); i++)
	{
		if (_tab[i] > _tab[i+1])
		{	
			if (dis < this->_tab[i] - this->_tab[i+1])
				dis = this->_tab[i] - this->_tab[i+1];
		}
		else if (dis < this->_tab[i+1] - this->_tab[i])
			dis = this->_tab[i+1] - this->_tab[i];
	}
	return (dis);
}

