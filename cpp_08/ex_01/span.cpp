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
	std::vector<int> sorted = _tab;

	if (_tab.size() == 0 || _tab.size() == 1)
		throw std::runtime_error("longestSpan : error no number in tab");

	std::sort(sorted.begin(), sorted.end());
	int min = std::abs(sorted[1] - sorted[0]); //pour pas metre 0 sinon ca va rester a 0
	for (size_t i = 1; i < sorted.size(); i++)
	{
		int span = std::abs(sorted[i] - sorted[i -1]);//abs cest absolut donc -5 fait 5
		if (span < min)
			min = span;
	}
	return (min);
}

int Span::longestSpan()
{
	if (_tab.size() == 0 || _tab.size() == 1)
		throw std::runtime_error("shortestSpan : error no number in tab");
	int num = *std::max_element(_tab.begin(), _tab.end()) - *std::min_element(_tab.begin(), _tab.end());
	return (num);
}

void Span::addBoosted(int num, ...)
{
	va_list args;
	if (this->_tab.size() >= this->_N)
		throw std::runtime_error("addBoosted : error tab is full");
	va_start(args, num);
	for (int i = 0; i < num; i++)
	{
		this->addNumber(va_arg(args, int));
	}
	va_end(args);
}
