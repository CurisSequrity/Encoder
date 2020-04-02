#include "EncoderMain.hpp"

int main()
{
    
    while (true)
    {
        // TypeSetter *typeSetter = new TypeSetter();
        // TextEncoder *textEncoder = new TextEncoder();
        typeSetter->SetDataType();
        switch (Type::DataType)
        {
        case 1:
            std::cout << "user wants to encode text data" << std::endl;
            textEncoder->SetInputType();
            textEncoder->StartEncoding();
            break;

        case 2:
            std::cout << "user want to encode image data" << std::endl;
            break;

        default:
            std::cout<< "No Condition matches" << std::endl;
            break;
        }
    }
}