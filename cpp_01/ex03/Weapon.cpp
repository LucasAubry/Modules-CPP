#include "Weapon.hpp"

const std::string& Weapon::getType(void)
{
	std::string &ref = this->_type;
	return (ref);
}

void Weapon::setType(std::string type_value)
{
	this->_type = type_value;
}

//constru destru
Weapon::Weapon(std::string name_type)
{
	this->_type = name_type;
}

Weapon::~Weapon() {
}
