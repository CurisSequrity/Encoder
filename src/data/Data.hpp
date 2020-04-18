#pragma once

#include <iostream>

struct PATH
{
    std::string TEXT_INPUT_PATH = "src/data/input/input.txt";
    std::string TEXT_OUPUT_PATH = "src/data/output/output.ecd";
    std::string IMAGE_INPUT_PATH = "src/data/input/input.jpeg";
    std::string IMAGE_OUTPUT_PATH = "src/data/output/output.jpeg";
};


namespace DATA
{
    inline std::string RuntimeTextData;
    inline std::string DocTextData;
    inline struct PATH path;

} // namespace DATA