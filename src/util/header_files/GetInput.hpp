#pragma once

#include "BaseHeaders.hpp"
#include "../../data/Data.hpp"

enum class TextOptions : int
{
        RunTime = 1,
        FromDocument,
        SaveText,
        ShowText,
        Back,
        Exit,
};

enum class ImageOptions : int
{
        PullImage = 1,
        ShowData,
        SaveData,
        Back,
        Exit,
};

enum class DataType : int
{
        TextEncode = 1,
        ImageEncoder,
        Exit,
};

static int Index;

namespace GetInput
{
    inline int GetDataType();
    inline int GetTextOption();
    inline int GetImageOption();
    inline int GetShowDataType();
    inline int GetSaveDataType();
}

int GetInput::GetDataType()
{
        std::cout << "1. Text Encodation" << std::endl;
        std::cout << "2. Image Encodation" << std::endl;
        std::cout << "3. Exit" << std::endl;
        std::cout << "Enter Your Option :- ";
        std::cin >> Index;
        return Index;
}

int GetInput::GetTextOption()
{
        std::cout << "1. Runtime Text Input" << std::endl;
        std::cout << "2. Encode From Text Document" << std::endl;
        std::cout << "3. Save Encoded Text" << std::endl;
        std::cout << "4. Show Encoded Text" << std::endl;
        std::cout << "5. Back" << endl;
        std::cout << "6. Exit" << std::endl;
        std::cout << "Enter yout option :-";
        
        std::cin >> Index;
        return Index;
}

int GetInput::GetImageOption()
{
        std::cout << "1. Pull Image" << std::endl;
        std::cout << "2. Show Data" << std::endl;
        std::cout << "3. Save Data" << std::endl;
        std::cout << "4. Back" << endl;
        std::cout << "5. Exit" << std::endl;
        std::cout << "Enter yout option :-";
        
        std::cin >> Index;
        return Index;
}

int GetInput::GetShowDataType()
{
        std::cout << "Choose What You Want :- " << endl;
        std::cout << "1. Show Runtime Encoded Data ?" << std::endl;
        std::cout << "2. Show Encoded Data From Docoment ?" << std::endl;
        std::cout << "3. Back" << std::endl;
        std::cout << "Enter Your Option :- ";
        // std::cin >> GetInput::Index;
        // return GetInput::Index;
        std::cin >> Index;
        return Index;
}

int GetInput::GetSaveDataType()
{
        std::cout << "Choose What You Want :- " << endl;
        std::cout << "1. Save Runtime Encoded Data ?" << std::endl;
        std::cout << "2. Save Encoded Data From Docoment ?" << std::endl;
        std::cout << "3. Back" << std::endl;
        std::cout << "Enter Your Option :- ";
        std::cin >> Index;
        return Index;
}