#include "convertion.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "usage: ./convert <literal>" << std::endl;
		return (0);
	}
	else
	{
		ScalarConverter::convert(argv[1]);
		return (0);
	}
}
