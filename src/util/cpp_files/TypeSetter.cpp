#include "../header_files/TypeSetter.hpp"

void TypeSetter::SetDataType()
{
        std::cout << "1. Text Encodation" << std::endl;
        std::cout << "2. Image Encodation" << std::endl;
        std::cout << "3. Exit" << std::endl;
        std::cout << "Enter Your Option :- ";
        std::cin >> Type::DataType;
}

void TypeSetter::SetTextInputType()
{
        std::cout << "1. Runtime Text Input" << std::endl;
        std::cout << "2. Get Text From Text Document" << std::endl;
        std::cout << "3. Show Encoded Text" << std::endl;
        std::cout << "4. Exit" << std::endl;
        std::cout << "Enter yout option :-"; std::cin >> Type::TextInputType;
}