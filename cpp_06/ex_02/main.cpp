#include "type.hpp"

int main()
{
	std::srand (time(0));
	for (int i = 0; i < 5; i++)
	{
		Base *type;
		type = generate();
		identify(type);
		identify(*type);
		delete type;
	}
}
