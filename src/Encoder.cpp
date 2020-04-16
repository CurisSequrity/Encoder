// Main File Of the Encoder

#include "Encoder.hpp"


/*
** THis is the main function Which the operating system will call
** When ever we will run the programe
*/
int main()
{
    Encoder *encoder = new Encoder();
}

/*
** This is the Encoder Default Constructor
** When Ever we will creat the constructor of the Encoder It will start Encoding Procress
** The process means asking user what they want to do What there choice and act according to that
*/
Encoder::Encoder()
{
    while (true)
    {
        switch (getInput->GetDataType())
        {
        case 1:
            Encoder::TextEncoding();
            break;

        case 2:
            std::cout << "user want to encode image data" << std::endl;
            break;

        case 3:
            exit(0);
            break;

        default:
            std::cout << "No Condition matches" << std::endl;
            break;
        }
    }
}


/*
** This is TextEncoding Fuction of Encoder
** It When User Will ask for the TexEncodation the programe will call this function
** It will Determine whether use want to encode Runtime Text or Txt from document
** OR want to save the data or just want to see the data
*/
void Encoder::TextEncoding()
{
    while (true)
    {
        switch (getInput->GetTextInputType())
        {
        case 1:
            textEncoder->StartRealtimeEncoding();
            break;

        case 2:
            textEncoder->EncodeFromDocument();
            break;

        case 3:
            if (textEncoder->SaveData())
                std::cout << "succeed" << std::endl;
            else
                std::cout << "failed" << std::endl;
            break;

        case 4:
            textEncoder->ShowEnocodeData();
            break;

        case 5:
            return;
            break;

        case 6:
            exit(0);
            break;

        default:
            std::cout << "You Entered the wrong input" << std::endl;
            break;
        }
    }
}