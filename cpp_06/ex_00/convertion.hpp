#pragma once

#include <string>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cctype>
#include <cerrno>
#include <limits>
#include <climits>
#include <cfloat>
#include <cmath>


class ScalarConverter
{
	private:	
		ScalarConverter();
		ScalarConverter(const std::string &other);
		ScalarConverter& operator=(const ScalarConverter& other);

	public:
		~ScalarConverter();

		static void convert(const std::string &literal);

};
