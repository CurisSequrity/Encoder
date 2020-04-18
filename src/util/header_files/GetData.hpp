#pragma once

#include "BaseHeaders.hpp"
#include "../../data/Data.hpp"
#include "../header_files/GetInput.hpp"
#include "../header_files/FileHandeler.hpp"
#include "../header_files/Log.hpp"

/*
**This Method handle the value getting process
*/
class GetData
{
    public:
        bool GetRuntimeText(std::string&);
        std::string GetRuntimeText();

        bool GetDataFromDoc(std::string&);
        std::string GetDataFromDoc();

        bool GetImageData(std::vector<uint8_t>&);
        std::vector<uint8_t> GetImageData();
};