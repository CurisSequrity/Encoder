#pragma once

#include <iostream>
#include <vector>

struct PATH
{
    const std::string TEXT_INPUT_PATH = "src/data/input/input.txt";
    const std::string TEXT_OUPUT_PATH = "src/data/output/output.ecd";
    const std::string IMAGE_INPUT_PATH = "src/data/input/input.jpeg";
    const std::string IMAGE_OUTPUT_PATH = "src/data/output/output.jpeg";
};


namespace DATA
{
    inline std::string RuntimeTextData;
    inline std::string DocTextData;
    inline std::vector<uint8_t> ImageData;
    inline struct PATH path;

} // namespace DATA