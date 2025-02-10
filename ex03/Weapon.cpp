#include "Weapon.hpp"

Weapon::Weapon( void ) {
	return;
}

Weapon::Weapon(std::string weapon_choice) {
	std::cout << "Weapon " << weapon_choice << " has been constructed" << std::endl;
	setType(weapon_choice);
	return;
}

Weapon::~Weapon ( void ) {
	std::cout << "Weapon has been destructed" << std::endl;
	return;
}

void	Weapon::setType( std::string weapon_choice ){
	this->type = weapon_choice;
	return;
}
const std::string& Weapon::getType ( void )
{
	return (this->type);
}



