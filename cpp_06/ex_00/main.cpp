#include "convertion.hpp"

int main(int argc, char **argv)
{
	if (argc < 2 || argc >= 3)
	{
		std::cout << "error argument" << std::endl;
	}
	else
	{
		ScalarConverter::convert(argv[1]);
	}
}
