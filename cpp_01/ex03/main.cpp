#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main(void)
{
	{
		Weapon club = Weapon(" crude spiked club");
		HumanA lucas("Bob", club);
		lucas.attack();
		club.setType(" some other type of club");
		lucas.attack();
	}
	{
		Weapon club = Weapon(" crude spiked club");
		HumanB jim("jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType(" some other type of club");
		jim.attack();
	}
	return 0;
}
