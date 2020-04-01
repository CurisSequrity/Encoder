#include "encoder-decoder.hpp"

class EncoderDecoder::EncodeDecode
{
    void SetProcessType() {
        int INPUT_NUMBER;
        cout << "1. Encode" << endl;
        cout << "2. Decode" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter Your Option :- ";
        cin >> INPUT_NUMBER;
    }

    int GetDataType()
    {
        int INPUT_NUMBER;
        cout << "1. Text Encodation" << endl;
        cout << "2. Image Encodation" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter Your Option :- ";
        cin >> INPUT_NUMBER;
        return INPUT_NUMBER;
    }

    void SetDataType(string* DataType){

    }

    void DataTypeText()
    {
        while (true)
        {
            int INPUT_NUMBER;
            cout << "1. Encode Custom Text" << endl;
            cout << "2. Decode Data Custom Text" << endl;
            cout << "3. Go Back" << endl;
            cout << "Chose One Option -: ";
            cin >> INPUT_NUMBER;

            switch (INPUT_NUMBER)
            {
            case 1:
                TextEncoder::CustomTextEncoding();
            case 2:
                //TEXT_DATA.DECODED_TEXT = decodeCustomText(TEXT_DATA.ENCODED_TEXT);
                //cout << "Decoded Text is :- " << TEXT_DATA.DECODED_TEXT;
                break;

            case 3:
                return;

            default:
                cout << "Enter Proper Number :( " << endl;
                INPUT_NUMBER = 0;
                break;
            }
        }
    }
};

int main()
{

    EncoderDecoder::EncodeDecode *encoder_decoder = new EncoderDecoder::EncodeDecode();
    while (true)
    {
        encoder_decoder->SetProcessType();

        if(EncoderDecoder::ProcessType == 1){


        }else if (EncoderDecoder::ProcessType == 1) {

            
        }
        EncoderDecoder::DataTypeIndex = encoder_decoder->GetDataType();

        switch (EncoderDecoder::DataTypeIndex)
        {
        case 1:
            //encoder_decoder->SetDataType();
            break;
        case 2:
            break;

        case 3:
            return 0;
            break;
        default:
            cout << "You Entered Some Wrong Number Please Recheck";
        }
    }
}