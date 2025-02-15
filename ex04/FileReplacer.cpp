#include "FileReplacer.hpp"


FileReplacer::FileReplacer(std::string filename, std::string search, std::string replace)
    : sourceFile(filename), newFile(filename + ".replace"), s1(search), s2(replace) {
    std::cout << "Constructor is called" << std::endl;
    return;
}

FileReplacer::~FileReplacer( void ) {
    std::cout << "Destructor is called" << std::endl;
    return;
}

bool isWordBoundary( char c ) {
    return ( !std::isalnum(c) );  // True if c is not a letter or digit (i.e., a boundary)
}

bool FileReplacer::replaceAndSave( void ) {
    std::ifstream inputFile(sourceFile.c_str()); // converts itt to comst strint, as string is accepted only by c11
    if (!inputFile.is_open()) {
        std::cout << "Error: file " << sourceFile << " could not be opened" << std::endl;
        return false;
    }

    std::ofstream outputFile(newFile.c_str());
    if (!outputFile.is_open()) {
        std::cout << "Error: file " << newFile << " could not be created" << std::endl;
        inputFile.close();
        return false;
    }

    std::string line;
    while (std::getline(inputFile, line)) {
        std::string modified_line;
        size_t pos = 0;

        while (pos < line.length()) {
            size_t found = line.find(s1, pos);

            // If no more occurrences, copy the rest of the line and break
            if (found == std::string::npos) {
                modified_line += line.substr(pos);
                break;
            }

            // Check if it's a full word match
            bool atStart = (found == 0 || isWordBoundary(line[found - 1]));
            bool atEnd = (found + s1.length() == line.length() || isWordBoundary(line[found + s1.length()]));

            if (atStart && atEnd) {  // Exact word match
                modified_line += line.substr(pos, found - pos);  // Copy text before match
                modified_line += s2;  // Replace with s2
                pos = found + s1.length();  // Move past replaced word
            } else {
                modified_line += line.substr(pos, found - pos + 1);  // Copy non-matching part
                pos = found + 1;  // Move forward to keep searching
            }
        }

        outputFile << modified_line << '\n';
    }

    inputFile.close();
    outputFile.close();
    return true;
}


//changes all of the occurences sadly
/*FileReplacer::FileReplacer(std::string filename, std::string search, std::string replace)
    : sourceFile(filename), newFile(filename + ".replace"), s1(search), s2(replace) {}

FileReplacer::~FileReplacer() {}

bool FileReplacer::replaceAndSave() {
    std::ifstream inputFile(sourceFile.c_str());  // C++98: use .c_str() for filenames
    if (!inputFile.is_open()) {
        std::cout << "Error: file " << sourceFile << " could not be opened" << std::endl;
        return false;
    }

    std::ofstream outputFile(newFile.c_str());
    if (!outputFile.is_open()) {
        std::cout << "Error: file " << newFile << " could not be created" << std::endl;
        inputFile.close();
        return false;
    }

    std::string line;
    std::string modified_line;
    while (std::getline(inputFile, line)) {
        size_t pos = 0;
        while ((pos = line.find(s1)) != std::string::npos) {
            modified_line += line.substr(0, pos) + s2;
            line = line.substr(pos + s1.length());
        }
        modified_line += line;
        outputFile << modified_line << '\n';
        modified_line.clear();
    }

    inputFile.close();
    outputFile.close();
    return true;
}*/
