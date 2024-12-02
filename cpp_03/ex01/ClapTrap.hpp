#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include "string"
#include "iostream"

class ClapTrap
{
	protected:
		int hit_points;
		int energy_point;
		int attack_damage;
		std::string name;
	public:
		ClapTrap(std::string name);
		~ClapTrap();
		void setHit_points(int nbr) {
			hit_points = nbr;
		}
		void setEnergy_point(int nbr) {
			energy_point = nbr;
		}
		void setAttack_damage(int nbr) {
			attack_damage = nbr;
		}
		std::string getName() const {
			return name;
		}
		void setName(const std::string& newName) {
			name = newName;
		}
		void stats(void);
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
