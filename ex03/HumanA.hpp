#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

class HumanA
{
	public:
		HumanA( std::string chosen_name, Weapon &chosen_weapon);
		~HumanA( void );
		void	set_name(std::string chosen_name);
		
		void	attack( void );
	
	private:
		std::string	name;
		Weapon		&weapon;
};

#endif