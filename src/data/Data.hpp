#pragma once

#include <iostream>

struct PATH
{
    std::string INPUT_PATH = "src/data/input/input.txt";
    std::string OUPUT_PATH = "src/data/output/output.ecd";
};


namespace DATA
{
    inline std::string RuntimeTextData;
    inline std::string DocTextData;
    inline struct PATH path;

} // namespace DATA