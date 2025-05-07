#include "Array.hpp"
#include <cassert>

void a(int num)
{
	Array<int> a(num);
	a[0] = 11;	
	a[1] = 2;	
	a[2] = 30;	
	std::cout << "A: " << a << std::endl;

	Array<int> b(a);
	a[0] = 5;	
	a[1] = 5;	
	a[2] = 5;	
	std::cout << "A: " << a << std::endl;
	std::cout << "B: " << b << std::endl;

	assert(b[0] == 11);
	assert(b[1] == 2);
	assert(b[2] == 30);
}

void c(int num)
{
	Array<std::string> c(num);
	c[0] = "hello";
	c[1] = "world";
	c[2] = "bye";
	std::cout << "C: " << c << std::endl;

	Array<std::string> d(c);
	c[0] = "louis";
	c[1] = "ouis";
	c[2] = "uis";
	std::cout << "C: " << c << std::endl;
	std::cout << "D: " << d << std::endl;

	assert(d[0] == "hello");
	assert(d[1] == "world");
	assert(d[2] == "bye");
}

void arr(int num)
{
	Array<int> arr(num);
	std::cout << arr << std::endl;
}



int main()
{
	a(3);
	std::cout << "\n" << std::endl;
	c(3);
	std::cout << "\n" << std::endl;
	arr(234);
}
