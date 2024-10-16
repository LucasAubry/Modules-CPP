#include "ClapTrap.hpp"

void ClapTrap::attack(const std::string& target)
{
	if (ClapTrap::energy_point <= 0 || ClapTrap::hit_points <= 0)
	{
		std::cout << "you cant attack you have" << std::endl;
		std::cout << "energy: " << ClapTrap::energy_point << std::endl;
		std::cout << "hp:     " << ClapTrap::hit_point << std::endl;
	}
	else
	{
		std::cout << this->name << "attack" << target.name << "and inflicts" << ClapTrap::attack_damage <<  "damage" << std::endl;
		ClapTrap::energy_point -= 1;
		target.takeDamage(ClapTrap.attack_damage);
	}
	return ;
}

void ClapTrap::takerDamage(unsigned int amount)
{
	if (ClapTrap::hit_point - amount < 0 || ClapTrap::energy_point <= 0)
	{
		std::cout << "energy: " << ClapTrap::energy_point << std::endl;
		std::cout << "hp:     " << ClapTrap::hit_point << std::endl;
		ClapTrap::hit_point = 0;
	}
	else
	{
		ClapTrap::energy_point -= 1;
		ClapTrap::hit_points -= amount;
		std::cout << "energy: " << ClapTrap::energy_point << std::endl;
		std::cout << "hp:     " << ClapTrap::hit_point << std::endl;
	}
	return ;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (ClapTrap::hit_points <= 0 || ClapTrap::energy_points <= 0)
	{
		std::cout << "you cant be repaired you have" << std::endl;
		std::cout << "energy: " << ClapTrap::energy_point << std::endl;
		std::cout << "hp:     " << ClapTrap::hit_point << std::endl;
	}
	else
	{
		ClapTrap::hit_point += amount;
		std::cout << "energy: " << ClapTrap::energy_point << std::endl;
		std::cout << "hp:     " << ClapTrap::hit_point << std::endl;
	}
	return ;
}
