#ifndef WEAPON_H
# define WEAPON_H

#include "string"
#include "iostream"

class Weapon
{
	private:
		std::string _type;
	public:
		Weapon(std::string name_type);
		~Weapon();
		const std::string& getType(void);
		void setType(std::string type_value);
};

#endif
