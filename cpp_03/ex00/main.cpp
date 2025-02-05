#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap Wall_e("Wall_e");
	ClapTrap badWall_e("Bad_Wall_e");
	std::cout << "\n";
//wall_e
	std::cout << "WALL_E: " << std::endl;
	Wall_e.attack("Bad_Wall_e");

	Wall_e.setAttack_damage(1);
	Wall_e.attack("Bad_Wall_e");

	Wall_e.stats();
	std::cout << "\n";
	Wall_e.takeDamage(5);
	Wall_e.stats();
	std::cout << "\n";
	Wall_e.beRepaired(5);
	Wall_e.stats();
	std::cout << "\n";

	Wall_e.setEnergy_points(0);
	Wall_e.beRepaired(5);
	Wall_e.stats();
	std::cout << "\n";
	Wall_e.setHit_points(0);
	Wall_e.attack("Bad_Wall_e");
	Wall_e.stats();
	std::cout << "\n";
	return (0);
}
