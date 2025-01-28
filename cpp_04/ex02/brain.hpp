#pragma once

class Brain
{
	private:
		std::string *ideas;
	public:
		Brain();
		Brain(const Brain &other);
		Brain& operator=(const Brain &other);
		~Brain();
};
