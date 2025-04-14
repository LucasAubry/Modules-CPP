#include "span.hpp"

int main()
{
	try
	{
		Span tab = Span(3);
		tab.addNumber(1);
		tab.addNumber(2);
		tab.addNumber(3);
	}
	catch(std::runtime_error &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::runtime_error &e)
	{
		std::cout << e.what() << std::endl;
	}
}
