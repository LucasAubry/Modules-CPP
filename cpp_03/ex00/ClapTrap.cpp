#include "ClapTrap.hpp"

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap(std::string name)
{
    std::cout << name << " was created " << std::endl;
    this->name = name;
    this->hit_points = 10;
    this->energy_point = 10;
    this->attack_damage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->name = other.getName();
        this->hit_points = other.getHitPoints();
        this->energy_point = other.getEnergyPoints();
        this->attack_damage = other.getAttackDamage();
    }
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << name << " was deleted " << std::endl;
}

std::string ClapTrap::getName() const
{
    return this->name;
}

int ClapTrap::getHitPoints() const
{
    return this->hit_points;
}

int ClapTrap::getEnergyPoints() const
{
    return this->energy_point;
}

int ClapTrap::getAttackDamage() const
{
    return this->attack_damage;
}

void ClapTrap::attack(const std::string &target)
{
    if (energy_point <= 0 || hit_points <= 0)
    {
        std::cout << name << " cannot attack because they have no energy or are out of hit points." << std::endl;
    }
    else
    {
        energy_point -= 1;
        std::cout << name << " attacks " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (hit_points <= 0)
    {
        std::cout << name << " is already destroyed and cannot take more damage." << std::endl;
    }
    else
    {
        hit_points -= amount;
        if (hit_points < 0)
            hit_points = 0;
        std::cout << name << " takes " << amount << " points of damage. Remaining HP: " << hit_points << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (energy_point <= 0 || hit_points <= 0)
    {
        std::cout << name << " cannot be repaired due to lack of energy or being destroyed." << std::endl;
    }
    else
    {
        energy_point -= 1;
        hit_points += amount;
        std::cout << name << " is repaired by " << amount << " points. Current HP: " << hit_points << std::endl;
    }
}

void ClapTrap::stats()
{
    std::cout << "Stats of " << name << ":\n";
    std::cout << "HP: " << hit_points << "\nEnergy: " << energy_point << "\nAttack Damage: " << attack_damage << std::endl;
}
