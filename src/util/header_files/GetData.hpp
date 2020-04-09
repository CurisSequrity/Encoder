#pragma once

#include "BaseHeaders.hpp"
#include "../../data/Data.hpp"
#include "../../util/header_files/TypeSetter.hpp"

/*
**This Method handle the value getting process
*/
class GetData
{
    public:
        void GetText();
        std::string GetRuntimeText();
        void GetTextFromDoc();
        void GetImage();
};