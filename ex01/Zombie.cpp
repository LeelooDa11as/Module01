#include "Zombie.hpp"

Zombie::Zombie( void ) {
    std::cout << "Default Constructor Zombie" << std::endl;
    return;
}

Zombie::Zombie( std::string name) {
	std::cout << "Constructor Zombie" << std::endl;
	this->set_name(name);
	return;
}

Zombie::~Zombie (void) {
	std::cout << "Destructor Zombie" << std::endl;
	return;
}

void	Zombie::set_name( std::string name )
{
	this->_name = name;
	std::cout << "Zombie name set to: " << this->_name << std::endl; 
	return;
}

void	Zombie::announce( void )const {
	std::cout << this->_name << " moar brainz!" << std::endl;
	return;
}