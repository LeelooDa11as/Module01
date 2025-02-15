#pragma once
#ifndef FILEREPLACER_HPP
#define FILEREPLACER_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <cctype> 

class FileReplacer {
    public:
    FileReplacer( std::string filename, std::string search, std::string replace );
    ~FileReplacer( void );

    bool replaceAndSave();

    private:
    std::string sourceFile;
    std::string newFile;
    std::string s1;
    std::string s2;
};

#endif
