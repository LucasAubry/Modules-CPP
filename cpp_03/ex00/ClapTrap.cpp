#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	std::cout << name << " was called " << std::endl;
	this->name = name;
	this->hit_points = 10;
	this->energy_point = 10;
	this->attack_damage = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << name << " was deleted " << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (energy_point <= 0 || hit_points <= 0)
	{
		std::cout << "you cant attack you have beacause" << std::endl;
	}
	else
	{
		energy_point -= 1;
		std::cout << this->name << " attack " << target << " causing " << ClapTrap::attack_damage <<  " points of damage " << std::endl;
	}
	return ;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hit_points - amount <= 0 || energy_point <= 0)
	{
		hit_points = 0;
	}
	else
	{
		hit_points -= amount;
	}
	return ;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (hit_points <= 0 || energy_point <= 0)
	{
		std::cout << " you cant be repaired you have " << std::endl;
	}
	else
	{
		energy_point -= 1;
		std::cout << this->name << " was repaired by " << amount << " hp " << std::endl;
		hit_points += amount;
	}
	return ;
}

void ClapTrap::stats()
{
	std::cout << "hp:" << this->hit_points << std::endl;
	std::cout << "energy:" << this->energy_point << std::endl;
}
