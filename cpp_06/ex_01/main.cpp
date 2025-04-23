#include "serial.hpp"

int main(void)
{
	Data val;
	val.nbr = 10;
	val.str= "test";

	uintptr_t raw = Serializer::serialize(&val);


	Data *ptr = Serializer::deserialize(raw);
	if (ptr)
	{
		std::cout << "str: " << &val << std::endl;
		std::cout << "ptr: " << ptr << std::endl;

		std::cout << "ptr->nbr:" << ptr->nbr << std::endl;
		std::cout << "ptr->str:" << ptr->str << std::endl;
	}
	else
		std::cout << "ptr dont exsiste" << std::endl;
	return (0);
}
