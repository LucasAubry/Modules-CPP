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






static bool isChar(const std::string& str)
{
	return str.length() == 1 && std::isprint(str[0]) && !std::isdigit(str[0]);
	//verifi si ya un seul caractere, si cest un caractere affichable, si cest pas un nombre
}

static bool isInt(const std::string& str)
{
	char *end;
	std::strtol(str.c_str(), &end, 10);
	return (*end == '\0');
}

static bool isFloat(const std::string& str)
{
	return (str.find('f') != std::string::npos && str.back() == 'f';
	//verifi si ya un f a la fin psk les float ca fini tjr en f (42.0f);
}

static bool isDouble(const std::string& str)
{
	return (str.find('.') != std::string::npos && str.back() != 'f';
	//pareil mais si la fin il ny a pas de f cest donc un double (42.0);
}

void ScalarConverter::convert(const std::string& literal)
{
	std::cout << std::fixed << std::setprecision(1);
	if (isChar(literal))
	{
		char c = literal[0];
		std::cout << "char: " << c << std::endl;
		std::cout << "int: " << static_cast<int>(c) << std::endl;
		std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
		std::cout << "double: " << static_cast<double>(c) << std::endl;
	}
	else if (isInt(literal))
	{
		int i = std::atoi(literal.c_str());
		char c = static_cast<char>(i);

		if (i >= 32 && i < 126)
			std::cout << "char: " << c << std::endl;
		else if (i >= 0 && i <= 255)
			std::cout << "char: is not printable" << std::endl;
		else
			std::cout << "char: impossible" << std::endl;

		std::cout << "int: " << i << std::endl;
		std::cout "float: " << static_cast<float>(i) << "f" << std::endl;
		std::cout "double: " << static_cast<double(i) << std::endl;
	}
	else if (literal == "nanf" || literal == "-inff" || literal == "+inff")
	{
		float f = std::strtof(literal.c_str(), NULL);
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: " << literal << std::endl;
		std::cout << "double: " << static_cast<double>(f) << std::endl;
	}
	else if (literal == "nan" || literal == "-inf" || literal == "+inf")
	{
		double d = std::strtod(literal.c_str(), NULL);
	}
	else if (isFloat(literal))
	{
		float f = std::strtof(literal.c_str(), NULL);
	}
	else if (isDouble(literal))
	{
		double d = std::strtod(literal.c_str(), NULL);
	}
	else
	{
		std::cout << "error : invalise literal" << std::endl;
	}
}


