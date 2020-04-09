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
            while (true)
            {  
                typeSetter->SetTextInputType(); 

                switch (Type::TextInputType)
                {
                case 1:
                    textEncoder->StartRealtimeEncoding();
                    break;
                case 3:
                    std::cout << "showing";
                    textEncoder->ShowEnocodeData();
                    break;
                case 4:
                    exit(0);
                    break;
                default:
                    break;
                }
            }            
            break;

        case 2:
            std::cout << "user want to encode image data" << std::endl;
            break;

        case 3:
            exit(0);
            break;
        default:
            std::cout<< "No Condition matches" << std::endl;
            break;
        }
    }
}