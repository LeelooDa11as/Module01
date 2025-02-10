#include "HumanB.hpp"

HumanB::HumanB( void ){
	std::cout << "HumanB constructed" << std::endl;
	return;
}

HumanB::HumanB(std::string chosen_name): weapon(nullptr){
	this->setName(chosen_name);

	std::cout << "HumanB: " << this->name <<  " constructed" << std::endl;
	return;
}

HumanB::~HumanB( void )
{
	std::cout << "HumanB " << this->name << " destructed" << std::endl;
	return;
}

void	HumanB::setName( std::string chosen_name){
	this->name = chosen_name;
	return;
}

void	HumanB::setWeapon( Weapon &new_weapon ){
	this->weapon = &new_weapon;
	return;
}

void	HumanB::attack( void ) {
	if ( this->weapon == NULL)
		std::cout << this->name << " has no weapon and tries a scary dance and shouting" <<std::endl;
	else
		std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	return;
}