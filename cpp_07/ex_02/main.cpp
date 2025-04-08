#include "Array.hpp"
#include <cassert>

int main()
{
	Array<int> arr(234);
	Array<int> a(3);
	a[0] = 1;
	a[1] = 2;
	a[2] = 3;
	Array<int> b(a);
	a[0] = 2;
	std::cout << b << std::endl;
	assert(b[0] == 1);
	assert(b[1] == 2);
	assert(b[2] == 3);
	assert(b.size() == 3);
	b = a;
	std::cout << "new" << b << std::endl;

	std::cout << arr << std::endl;
}
