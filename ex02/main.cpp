#include <iostream>
#include <string>

int	main (void)
{
	std::string		brain = "HI THIS IS BRAIN";
	// a pointer to the string stores the memory address of another variable
	std::string		*stringPTR = &brain;
	//reference to the string, refers to the same memory location as brain
	// any modification to stringREF will also modify str and viseversa
	//has to be initialized when declared and cannot be reassigned to a different variable.
	std::string		&stringREF = brain;

	//memory address prints:
	std::cout << "The memory address of the string variable: " << &brain << std::endl;
	std::cout << "The memory address held by stringPTR: " << stringPTR << std::endl;
	std::cout << "The memory address held by the stringREF: " << &stringREF << std::endl;
	std::cout << std::endl;
	//value prints
	std::cout << "The value of the string variable: " << brain << std::endl;
	std::cout << "The value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << "The value pointed to by stringREF: " << stringREF << std::endl;
	//std::cout << std::endl;
	//playing
	//stringREF = "dirty mouse house";
	//*stringPTR = "royal accent";
	//std::cout << brain << std::endl;


	return (0);
}