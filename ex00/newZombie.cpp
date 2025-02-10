#include "Zombie.hpp"

Zombie *newZombie( std::string name )       
{
	Zombie	*rotten_zombie = new Zombie(name);
    rotten_zombie->announce();
    return (rotten_zombie);
}
