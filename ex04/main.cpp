#include <iostream>
#include <string>
#include <fstream>

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Please, enter one file and two strings" << std::endl;
		return (1);
	}

	std::string	sourceFile = av[1];
	std::string	newFile = sourceFile + ".replace";
	std::string	line;
	std::string	s1 = av[2];
	std::string	s2 = av[3];

	//opening the source file
	std::ifstream inputFile(sourceFile);
	if (!inputFile.is_open()) {
		std::cout << "Error: file " << sourceFile << " could not be open" << std::endl;
		return (1);
	}

	//creating the output file
	std::ofstream outputFile(newFile);
	if (!outputFile.is_open()) {
		std::cout << "Error: file " << newFile << " could not be open" << std::endl;
		inputFile.close();
		return (1);
	}
	std::string	modified_line;
	while (std::getline(inputFile, line)){
		size_t	pos = 0;
		pos = line.find(s1);
		
		while ( pos!= std::string::npos)
		{
			modified_line += line.substr(0, pos);
			modified_line += s2;
			line = line.substr(pos + s1.length()); //giving only 1 parm. will cut from that pos to the end
			pos = line.find(s1);
		}
		modified_line += line;
		outputFile << modified_line << '\n';
		modified_line.clear();
	}
	inputFile.close();
	outputFile.close();
	return (0);
}