#include "Zombie.hpp"

void	randomChump( std::string name )
{
	Zombie	Rick(name);
	Rick.announce();
	return;
}