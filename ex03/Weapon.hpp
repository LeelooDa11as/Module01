#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {
	public:
		Weapon( void );
		Weapon( std::string	weapon_choice);
		~Weapon( void );

		void				setType( std::string weapon_choice );
		const std::string&	getType( void );
	private:
		std::string	type;
};


#endif