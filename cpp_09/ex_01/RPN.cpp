#include "RPN.hpp"

Rpn::Rpn() {}
Rpn::~Rpn() {}
Rpn::Rpn(const Rpn& other) : stack(other.stack) {}
Rpn& Rpn::operator=(const Rpn& other)
{
    if (this != &other)
        this->stack = other.stack;
    return *this;
}



void Rpn::calcule(const std::string &token)
{
	int value = 0;
	if (token == "+" || token == "-" || token == "*" || token == "-" || token == "/")
	{
		int b = this->stack.back(); stack.pop_back();
		int a = this->stack.back(); stack.pop_back();
		
		if (token == "+")
		{
			//std::cout << "+: " << a << " " << b << " " << value << std::endl;
			value = a + b;
			//std::cout << "+: " << a << " " << b << " " << value << std::endl;
		}
		else if (token == "-")
			value = a - b;
		else if (token == "*")
			value = a * b;
		else if (token == "/")
		{
			if (b == 0)
				throw std::runtime_error("Error: /0 ");
			value = a / b;
		}
	}
	else
	{
		if (token.length() != 1 || !isdigit(token[0]))
			throw std::runtime_error("Error: not a digit token");
		value = token[0] - '0';
	}
	this->stack.push_back(value);
}

void Rpn::printToken()
{
	std::cout << this->stack.back() << std::endl;
}

void Rpn::addRest()
{
	while (stack.size() != 1)
	{
		int b = stack.back(); stack.pop_back();
		int a = stack.back(); stack.pop_back();
		stack.push_back(a + b);
	}
}
