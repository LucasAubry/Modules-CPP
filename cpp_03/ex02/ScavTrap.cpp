#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << name << " of ScavTrap was created " << std::endl;
	this->name = name;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_damage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << name << " of ScavTrap was deleted " << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (energy_points <= 0 || hit_points <= 0)
	{
		std::cout << "you cant attack beacause ScavTrap have" << std::endl;
	}
	else
	{
		energy_points -= 1;
		std::cout << this->name << " the ScavTrap attack " << target << " causing " << ScavTrap::attack_damage <<  " points of damage " << std::endl;
	}
	return ;
}

void ScavTrap::guardGate()
{
	std::cout << name << " just got into the Gate Keeper 🤯" << std::endl;
}
