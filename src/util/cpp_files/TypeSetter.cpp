#include "../header_files/TypeSetter.hpp"

void TypeSetter::SetDataType()
{
    while (true)
    {
        std::cout << "1. Text Encodation" << std::endl;
        std::cout << "2. Image Encodation" << std::endl;
        std::cout << "3. Exit" << std::endl;
        std::cout << "Enter Your Option :- ";
        std::cin >> Type::DataType;

        /* Checking if the user wants to exit or not*/
        if (Type::DataType == 3)
            exit(0);
        else
            return;
    }
}

void TypeSetter::SetTextInputType()
{
        std::cout << "1. Runtime Text Input" << std::endl;
        std::cout << "2. Get Text From Text Document" << std::endl;
        std::cout << "3. Exit" << std::endl;
        std::cout << "Enter yout option :-"; std::cin >> Type::TextInputType;

        if (Type::TextInputType == 3)
            exit(0);
        else 
            return;
}