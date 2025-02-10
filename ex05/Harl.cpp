#include "Harl.hpp"

Harl::Harl ( void ) {
	std::cout << "Harl has been constructed" << std::endl;
	return;
}

Harl::~Harl( void ){
	std::cout << "Harl has been destructed" << std::endl;
	return; 
}

void	Harl::complain( std::string level ){
	void (Harl::*functionsPtr[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error, &Harl::invalidInput};
	std::string	level_opt[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int	i = 0;
	while (i < 4 && level.compare(level_opt[i]))
		i++;
	(this->*functionsPtr[i])();
	return;
}

void	Harl::debug( void ){
	std::cout << "Harl is debugging" << std::endl;
	return;
}

void	Harl::info( void ){
	std::cout << "Carl is informing" << std::endl;
	return;
}

void	Harl::warning( void ){
	std::cout << "Harl is warning you!! Take it seriously please" << std::endl;
	return;
}

void	Harl::error( void ){
	std::cout << "Harl is in error mode and will explode" << std::endl;
	return;
}

void	Harl::invalidInput( void ){
	std::cout << "Invalid input. It is unacceptable! Unacceptable!" << std::endl;
}
