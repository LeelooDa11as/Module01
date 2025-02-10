#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	std::cout << "Zombie class constructed" << std::endl;
	this->_name = name;
	return;
}

Zombie::~Zombie(void)
{
	std::cout << "Zombie class destructed" << std::endl;
	return;
}

void	Zombie::announce(void)const {
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return;
}