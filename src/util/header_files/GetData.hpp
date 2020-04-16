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
        void GetText();
        bool GetRuntimeText(std::string&);
        bool GetDataFromDoc(std::string&);
        void GetImage();
};