#include "convertion.hpp"

ScalarConverter::ScalarConverter() {}
ScalarConverter::~ScalarConverter() {}

ScalarConverter::ScalarConverter (const std::string &other)
{
	*this = other;
}
ScalarConverter &ScalarConverter::operator=(const ScalarConverter& other)
{
	(void) other;
	return *this;
}

void ScalarConverter::convert(std::string string)
{
	std::cout << string << std::endl;
	
}
