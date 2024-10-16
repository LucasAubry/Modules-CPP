#ifndef CLAPTRAP_H
#define CLAPTRAP_H

class ClapTrap
{
	private:
		int hit_points;
		int energy_point;
		int attack_damage;
		int name;
	public:
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
