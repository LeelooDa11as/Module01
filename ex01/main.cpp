#include "Zombie.hpp"

int	main(void)
{
	int		num = 5;
	Zombie	*first_zombie = zombieHorde(num, "WalkingDead");

	for (int i=0; i < num; i++){
		first_zombie[i].announce();
	}

	delete[] first_zombie;
	return (0); 
}