#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanB
{
	public:
		HumanB( void );
		HumanB ( std::string chosen_name );
		~HumanB( void );
		std::string	name;

		void	setName( std::string chosen_name );
		void	setWeapon( Weapon &new_weapon );
		void	attack( void );
	
	private:
		Weapon	*weapon;

};

#endif