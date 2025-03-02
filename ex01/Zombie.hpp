#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

class	Zombie 
{
	public:
	Zombie( void );
	Zombie( std::string name );
	~Zombie(void);
	void	set_name(std::string name);
	void	announce( void )const;

	private:
	std::string	_name;
};

Zombie* zombieHorde( int n, std::string name );
#endif