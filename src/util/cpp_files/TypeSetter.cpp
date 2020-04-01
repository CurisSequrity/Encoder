#include "../header_files/TypeSetter.hpp"

void TypeSetter::SetProcessType()
{
    std::cout << "1. Encode" << std::endl;
    std::cout << "2. Decode" << std::endl;
    std::cout << "3. Exit" << std::endl;
    std::cout << "Enter Your Option :- ";
    std::cin >> Type::ProcessType;

    /* Checking if the user wants to exit or not*/
    if (Type::ProcessType == 3)
        exit(0);
}

void TypeSetter::SetDataType()
{
    if (Type::ProcessType == 1)
    {
        std::cout << "1. Text Encodation" << std::endl;
        std::cout << "2. Image Encodation" << std::endl;
        std::cout << "3. Exit" << std::endl;
        std::cout << "Enter Your Option :- ";
        std::cin >> Type::DataType;
    }
    else if (Type::ProcessType == 2)
    {
        std::cout << "1. Text Decodation" << std::endl;
        std::cout << "2. Image Decodation" << std::endl;
        std::cout << "3. Exit" << std::endl;
        std::cout << "Enter Your Option :- ";
        std::cin >> Type::DataType;
    }

    /* Checking if the user wants to exit or not*/
    if (Type::DataType == 3)
        exit(0);
    else 
        return;
}