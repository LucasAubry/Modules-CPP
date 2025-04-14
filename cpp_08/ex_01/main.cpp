#include "span.hpp"

int main()
{
//ok
	try
	{
		Span sp = Span(11);
		sp.addBoosted(11, 2, 34, 42, 19, 6, 20, 101, 19, 1, 3);//le permier nombre cest le nombre dargument
	}
	catch(std::runtime_error &e)
	{
		std::cout << e.what() << std::endl;
	}

//ko
	try
	{
		Span sp = Span(11);
		sp.addBoosted(11, 2, 34, 42, 19, 6, 20, 1, 3, 21, 3);
	}
	catch(std::runtime_error &e)
	{
		std::cout << e.what() << std::endl;
	}


//ko
	try
	{
		Span sp = (1);//BON CA CA MARCHE MAL OK 
		sp.addBoosted(3, 2, 3); //QUAND TU CHANGE LE PREMIRR NOMBR CA BUG

		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}
	catch (std::runtime_error &e)
	{
		std::cout << e.what() << std::endl;
	}



//ok
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
