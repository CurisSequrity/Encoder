#include "util/header_files/TypeSetter.hpp"

int main()
{

    TypeSetter *typeSetter = new TypeSetter();
    while (true)
    {
        typeSetter->SetProcessType();
        typeSetter->SetDataType();
        std::cout<< Type::ProcessType << std::endl;
        switch (Type::DataType && Type::ProcessType)
        {
        case 1 && 1:
            //it means user wants to encode text data
            std::cout << "user wants to encode text data" << std::endl;
            break;
        default:
            std::cout<< "No Condition matches" << std::endl;
            break;
        }
        // if (Type::ProcessType == 1) {
        //     // It means it wants to encode
        //     // now we are checking what kind of data user want to encode

        // }
    }
}