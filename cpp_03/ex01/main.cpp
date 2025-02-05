#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap Wall_e("Wall_e");
	ClapTrap badWall_e("Bad_Wall_e");
	ScavTrap Eve("Eve");
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
//Eve
	std::cout << "\n";
	std::cout << "EVE: " << std::endl;

	Eve.attack("Wall_e");
	Eve.stats();

	std::cout << "\n";
	Eve.takeDamage(30);
	Eve.stats();

	std::cout << "\n";
	Eve.beRepaired(10);
	Eve.stats();

	std::cout << "\n";
	Eve.guardGate();
	std::cout << "\n";

	return (0);
}
