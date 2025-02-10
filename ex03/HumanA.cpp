#include "HumanA.hpp"

HumanA::HumanA(std::string chosen_name, Weapon &chosen_weapon): weapon(chosen_weapon) {
	this->set_name(chosen_name);
	std::cout << "HumanA: " << this->name <<  " constructed" << std::endl;
	return;
}

HumanA::~HumanA( void )
{
	std::cout << "HumanA: " << this->name << " destructed" << std::endl;
}

void	HumanA::set_name( std::string chosen_name){
	this->name = chosen_name;
}


void	HumanA::attack( void ) {
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
	return;
}