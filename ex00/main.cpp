#include "Zombie.hpp"

int	main(void)
{
	Zombie	*zombie = newZombie("Awfully rotten");
	randomChump("Ricky");
	delete zombie;
	return (0);
}