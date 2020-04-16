#include "../header_files/GetInput.hpp"


int GetInput::GetDataType()
{
        std::cout << "1. Text Encodation" << std::endl;
        std::cout << "2. Image Encodation" << std::endl;
        std::cout << "3. Exit" << std::endl;
        std::cout << "Enter Your Option :- ";
        std::cin >> Index;
        return Index;
}

int GetInput::GetTextInputType()
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
        // std::cin >> GetInput::Index;
        // return GetInput::Index;
        std::cin >> Index;
        return Index;
}