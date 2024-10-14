#include "HumanB.hpp"

HumanB::HumanB(std::string name)
	: _name(name) {
}

void HumanB::attack(void)
{
	std::cout << this->_name << " attacks with their" << _weapon->getType() << std::endl;
}
	
//destruc construc
void HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
}

HumanB::~HumanB() {
}
