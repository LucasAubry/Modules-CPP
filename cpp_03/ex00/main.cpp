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
	Wall_e.takeDamage(5);
	Wall_e.stats();
	Wall_e.beRepaired(5);
	Wall_e.stats();
//bad wall_e
	std::cout << "\n";
	std::cout << "BADWALL_E: " << std::endl;
	badWall_e.attack("Wall_e");

	badWall_e.setAttack_damage(11);
	badWall_e.attack("Wall_e");	

	badWall_e.stats();
	badWall_e.takeDamage(11);
	badWall_e.stats();

	badWall_e.beRepaired(11);
	badWall_e.stats();
	std::cout << "\n";

	return (0);
}
