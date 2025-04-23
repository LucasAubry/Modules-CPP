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
#include <stdint.h>

class Data
{
	public:
		uintptr_t nbr;
		std::string str;
		Data() : nbr(0), str("") {}
};

class Serializer
{
	private:
		

	public:
		Serializer();
		Serializer(const Serializer &other);
		Serializer& operator=(const Serializer &other);
		~Serializer();

		static uintptr_t serialize(Data *ptr);
		static Data *deserialize(uintptr_t raw);
};
