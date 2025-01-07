#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include "string"
#include "iostream"

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>

class ClapTrap
{
private:
    int hit_points;
    int energy_point;
    int attack_damage;
    std::string name;

public:
    ClapTrap(std::string name);
    ClapTrap(const ClapTrap &other);
    ClapTrap &operator=(const ClapTrap &other);
    ~ClapTrap();

    int getHitPoints() const;
    std::string getName() const;
    int getEnergyPoints() const;
    int getAttackDamage() const;

    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void stats();
};

#endif


#endif
