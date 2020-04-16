#pragma once

#include <fstream>

#include "../header_files/BaseHeaders.hpp" 

// Variables Defined :)
static std::ifstream ReadFile;
static std::ofstream WriteFile;
static std::string TempData, PrevData;


namespace FileHandeler {

    /*
    ** It will change the value of the variable you will send..
    ** READ(PATH_OF_THE_FILE, VARIABLE_WHERE_YOU_WANT_TO_STORE_THE_DATA)
    */
    bool Read(const std::string&, std::string&);
    bool Read(std::string&, std::string&);

    /*
    ** It will return the Data which it read from a file 
    ** READ(PATH_OF_THE_FILE)  
    */
    std::string Read(const std::string&);
    std::string Read(std::string&);
    

    /*
    ** This funtion is goind to save the data
    ** Write(PATH_WHERE_THE_DATA_WILL_STORE, DATA_YOU_WANT_TO_WRITE)
    */
    bool Write(const std::string&, std::string&);
    bool Write(std::string&, std::string&);
}