#pragma once

#include "util/header_files/BaseHeaders.hpp"
#include "util/header_files/GetInput.hpp"
#include "encoders/header_files/TextEncoder.hpp"
#include "util/header_files/Log.hpp"

class Encoder
{
    public:
        inline Encoder(void); // constructor
        inline ~Encoder(void);
        inline void SelectDataType(void);
        inline bool StartEncoding(void);

private:
    inline bool TextEncoding(void);
    // DataType dataType;
    TextEncoder *textEncoder; // allocating memory in head
};


/*
** This is the Encoder Default Constructor
** When Ever we will creat the constructor of the Encoder It will start Encoding Procress
** The process means asking user what they want to do What there choice and act according to that
*/
inline Encoder::Encoder()
{
    this->textEncoder = new TextEncoder(); // allocating memory into heap
}

/*
* Encoder Destructor to destroy the memory allocated for this class
*/
inline Encoder::~Encoder(void)
{
    delete this;
}

inline bool Encoder::StartEncoding(void)
{
    switch ((DataType)GetInput::GetDataType())
    {
        case DataType::TextEncode :
            while ( this->TextEncoding() );
            break;
        case DataType::ImageEncoder :
            std::cout << "user want to encode image data" << std::endl;
            break;
        case DataType::Exit :
            exit(0);
            break;
        default:
            std::cout << "No Condition matches" << std::endl;
    }
    return true;
}
/*
** This is TextEncoding Fuction of Encoder
** It When User Will ask for the TexEncodation the programe will call this function
** It will Determine whether use want to encode Runtime Text or Txt from document
** OR want to save the data or just want to see the data
*/
inline bool Encoder::TextEncoding()
{
        switch ((TextOptions)GetInput::GetTextOption())
        {
        case TextOptions::RunTime:
            textEncoder->StartRealtimeEncoding();
            break;

        case TextOptions::FromDocument:
            textEncoder->EncodeFromDocument();
            break;

        case TextOptions::SaveText:
            if (textEncoder->SaveData())
                std::cout << "succeed" << std::endl;
            else
                std::cout << "failed" << std::endl;
            break;

        case TextOptions::ShowText:
            textEncoder->ShowEnocodeData();
            break;

        case TextOptions::Back :
            break;

        case TextOptions::Exit:
            exit(0);
            break;
        default:
            std::cout << "You Entered the wrong input" << std::endl;
        }
    return true;
}