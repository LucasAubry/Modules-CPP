#pragma once
#include "string"
#include "iostream"
#include "cstdlib"
#include "list"
#include "sstream"

class Rpn
{
	private:
		std::list<int> stack;
	public:
		Rpn();
		~Rpn();
		Rpn(const Rpn& other);
		Rpn& operator=(const Rpn& other);

		void calcule(const std::string &token);
		void printToken();
		void addRest();
};
