#include "ClapTrap.hpp"
#include "FlagTrap.hpp"

FlagTrap::FlagTrap(std::string name) :  ClapTrap(name)
{
	std::cout << name << " the best FlagTrap just been assembled" << std::endl;
	this->name = name;
	this->hit_points = 100;
	this->energy_point = 100;
	this->attack_damage = 30;
}

FlagTrap::~FlagTrap()
{
	std::cout << this->name << " sorry but FlagTrap was destroyed" << std::endl;
}

void FlagTrap::highFivesGuys(void)
{
	std::cout << "hello team go make a high fives ? (please)" << std::endl;
}

