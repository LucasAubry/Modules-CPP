#pragma once

#include "string"
#include "iostream"

class ScalarConverter
{
	private:	
		ScalarConverter();
		ScalarConverter(const std::string &other);
		ScalarConverter& operator=(const ScalarConverter& other);

	public:
		~ScalarConverter();

		static void convert(const std::string string);

};
