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
	return literal.length() == 1 && std::isprint(literal[0]) && !std::isdigit(literal[0]);
}

static bool isInt(const std::string &literal)
{
	char *ptr;
	long val = std::strtol(literal.c_str(), &ptr, 10);
	return (*ptr == '\0' && val >= INT_MIN && val <= INT_MAX);

	/* exemple :
	long val = std::strtol("123abc", &ptr, 10);
	end pointera vers le caractère 'a' 
	car strtol sarrete des quil rencontre un caractere qui ne peut pas etre converti en nombre
	
	on utlise *ptr pour savoir si la string est bonne psk val contien 123 meme si ya un abc
	*/
}

static bool isFloat(const std::string &literal)
{
	if (literal == "+inff" || literal == "-inff" || literal == "nanf")
		return (true);
	char *ptr;
	errno = 0; //variable g derreur
	std::strtof(literal.c_str(), &ptr);

	if (errno != 0 || ptr == literal.c_str() || *ptr != 'f')
		return (false);
	return (true);
}

static bool isDouble(const std::string &literal)
{
	if (literal == "+inf" || literal == "-inf" || literal == "nan")
		return (true);

	char *ptr;
	errno = 0;
	std::strtod(literal.c_str(), &ptr);

	if (errno != 0 || ptr == literal.c_str() || *ptr != '\0')
		return (false);
	return (true);
}

//---------------------------print-------------------------------

void print_char(double value)
{ // isnan return true si la valeur est not a number (nan)
	if (isnan(value) || value < 0 || value > 127)
		std::cout << "error char impossible" << std::endl;
	else if (!std::isprint(static_cast<char>(value)))
		std::cout << "Type Char: not displayable" << std::endl;
	else
		std::cout << "Type Char: " <<static_cast<char>(value) << std::endl;
}

void print_int(double value)
{
	if (isnan(value) || value > INT_MAX || value < INT_MIN)
		std::cout << "error Overflow" << std::endl;
	else
		std::cout << "Type Int: " << static_cast<int>(value) << std::endl;
}
void print_float(double value)
{	
	std::cout << std::fixed << std::setprecision(5);
	std::cout << "Type Float: " << static_cast<float>(value) << "f" << std::endl;
}
void print_double(double value)
{
//fixed == notation decimale(pas sientifique 112e3) 112,3333
//setprecision(1) un chiffre apres la virgules
	std::cout << std::fixed << std::setprecision(5);
	std::cout << "Type Double: " << value << std::endl;
}


void print_type(double value)
{
	print_char(value);
	print_int(value);
	print_float(value);
	print_double(value);
}

void ScalarConverter::convert(const std::string &literal)
{
	double value;//on convertie tout en double

	if (isChar(literal))
	{
		value = static_cast<double>(literal[0]);
		print_type(value);
	}
	else if (isInt(literal))
	{
		int val = std::atoi(literal.c_str());
		value = static_cast<double>(val);
		print_type(value);
	}
	else if (isFloat(literal))
	{
		float val = std::strtof(literal.c_str(), NULL);
		value = static_cast<double>(val);
		print_type(value);
	}
	else if (isDouble(literal))
	{
		value = std::strtod(literal.c_str(), NULL);
		print_type(value);
	}
	else
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
		return ;
	}
}

