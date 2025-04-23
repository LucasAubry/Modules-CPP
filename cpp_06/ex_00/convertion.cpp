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

static bool isChar(const std::string &literal)
{
	return literal.lenght() == 1 && std::isprint(literal[0]) && !std::isdigit(literal[0]);
}

static bool isInt(const std::string &literal)
{
	char *end;
	long val = std::strtol(literal.c_str(), &end, 10);
	return (*end == '\0' && val >= INT_MIN && val <= INT_MAX);
}

static bool isFloat(const std::string &literal)
{
	if (literal == "+inff" || literal == "-inff" || literal == "nanf")
		return (true);
	char *end;
	errno = 0;
	float val == std::strtof(literal.c_str(), &end();

	if (errno != 0 || end == literal.c_str() || *end != 'f')
		return (false);
	return (true);
}

static bool isDouble(const std::string &literal)
{
	if (literal == "+inf" || literal == "-inf" || literal == "nan")
		return (true);

	char *end;
	errno = 0
	double = val = std::strtod(literal.c_str(), &end);

	if (errno != 0 || end == literal.c_str() || *end != '\0')
		return (false);
	return (true);
}



void ScalarConverter::convert(const std::string &literal)
{
	double value;

	if (isChar(literal))
		value = static_cast<double>(literal[0]);
	else if (isInt(literal))
		value = static_cast<double>(literal);	
	else if (isFloat(literal))
		value = static_cast<double>(literal);

}
