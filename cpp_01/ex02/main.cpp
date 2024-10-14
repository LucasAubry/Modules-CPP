#include "iostream"
#include "string"

int main(void)
{
	std::string word = "HI THIS IS BRAIN";
	std::string *stringPTR = &word;
	std::string &stringREF = word;

	std::cout << "the address of the string in memory " << &word << std::endl;
	std::cout << "address store in stringPTR " << &stringPTR << std::endl;
	std::cout << "address store in stringREF " << &stringREF << std::endl;
	std::cout << "\n\n";
	std::cout << "the value of the string " << word << std::endl;
	std::cout << "the value pointed by stringPTR " << *stringPTR << std::endl;
	std::cout << "the value pointed by stringREF " << stringREF << std::endl;
}
