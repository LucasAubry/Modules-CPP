#pragma once

#include "string"
#include "iostream"

class ClapTrap
{
	protected:
		int hit_points;
		int energy_points;
		int attack_damage;
		std::string name;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &other);
		ClapTrap &operator=(const ClapTrap &other);
		~ClapTrap();
		std::string getName() const;
	    int getHitPoints() const;
	    int getEnergyPoints() const;
	    int getAttackDamage() const;

		void setHit_points(int nbr);
		void setAttack_damage(int nbr);
		void setEnergy_points(int nbr);
		void setName(const std::string& newName) {
			name = newName;
		}
		void stats(void);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};
