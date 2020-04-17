#include <fstream>
#include <vector>

#include "../header_files/BaseHeaders.hpp" 

// Variables Defined :)
static std::ifstream ReadFile;
static std::ofstream WriteFile;
static std::string TempData, PrevData;


namespace FileHandeler {

    /*
    ** It will read the text from files
    ** READ(PATH_OF_THE_FILE, VARIABLE_WHERE_YOU_WANT_TO_STORE_THE_DATA)
    */
    bool ReadText(const std::string&, std::string&);
    bool ReadText(std::string&, std::string&);
    std::string ReadText(const std::string&);
    std::string ReadText(std::string&);

    /*
    ** Methods to read the Image file
    */
    bool ReadImage(const std::string&, std::vector<uint8_t>&);
    bool ReadImage(std::string&, std::vector<uint8_t>&);
    std::vector<uint8_t> ReadImage(const std::string&);
    std::vector<uint8_t> ReadImage(std::string&);
    
    

    /*
    ** This funtion is goind to save the data
    ** Write(PATH_WHERE_THE_DATA_WILL_STORE, DATA_YOU_WANT_TO_WRITE)
    */
    bool WriteText(const std::string&, std::string&);
    bool WriteText(std::string&, std::string&);

    /*
    ** Functions for write images
    */
    bool WriteImage(const std::string&, std::vector<uint8_t>&);
    bool WriteImage(std::string&, std::vector<uint8_t>&);
}