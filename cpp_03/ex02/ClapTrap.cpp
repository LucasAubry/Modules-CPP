#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	std::cout << name << " was created " << std::endl;
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
		std::cout << "you cant attack beacause ClapTrap have" << std::endl;
	}
	else
	{
		energy_point -= 1;
		std::cout << this->name << " the ClapTrap attack " << target << " causing " << ClapTrap::attack_damage <<  " points of damage " << std::endl;
	}
	return ;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (hit_points - amount <= 0 || energy_point <= 0)
	{
		std::cout << "a Robot that is already dead cannot take damage " << std::endl;
		hit_points = 0;
	}
	else
	{
		std::cout << this->name << " take " << amount << " damage " << std::endl;
		hit_points -= amount;
		if (hit_points < 0)
			hit_points = 0;
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
		hit_points += amount;
		std::cout << this->name << " was repaired by " << amount << " hp " << std::endl;
	}
	return ;
}

void ClapTrap::stats()
{
	std::cout << "hp:" << this->hit_points << std::endl;
	std::cout << "energy:" << this->energy_point << std::endl;
}
