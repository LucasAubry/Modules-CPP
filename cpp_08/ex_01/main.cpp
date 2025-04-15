#include "span.hpp"

int main()
{

	std::cout << "\nsujet--------: " << std::endl;
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


	std::cout << "\naddBoosted-------: " << std::endl;
//ko
	try
	{
		Span sp2 = Span(10);
		sp2.addBoosted(11, 2, 34, 42, 19, 6, 20, 101, 19, 1, 3, 2);//le 1er nombre cest forcement la size
	}
	catch(std::runtime_error &e)
	{
		std::cout << e.what() << std::endl;
	}

//ko
	try
	{
		Span sp3 = Span(1);
		sp3.addBoosted(1, 2);

		std::cout << sp3.shortestSpan() << std::endl;
		std::cout << sp3.longestSpan() << std::endl;
	}
	catch(std::runtime_error &e)
	{
		std::cout << e.what() << std::endl;
	}


//ko
  try
  {
  	Span sp4 = Span(10);
  	sp4.addBoosted(10, 1, 5, 7, 9, 10, 39, 59, 78, 43, 2);

  	std::cout << sp4.shortestSpan() << std::endl;
  	std::cout << sp4.longestSpan() << std::endl;
  }
  catch (std::runtime_error &e)
  {
  	std::cout << e.what() << std::endl;
  }


}
