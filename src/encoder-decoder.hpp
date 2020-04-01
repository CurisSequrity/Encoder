#pragma once

#include <iostream>

#include "./encoder/cpp_files/textencoder.cpp"

using namespace std;

namespace EncoderDecoder
{
int DataTypeIndex;
/*
Process type is to store the type of process we need to do
Example 
1 -> Encodation;
2 -> Decodation;
and so on;;
*/
static int ProcessType = 0;

/*
Data type is to store the type of Data we need to do
Example 
1 -> Text;
2 -> Image;
and so on;;
*/
static int DataType = 0;

class EncodeDecode
{
public:
    EncodeDecode();
    int SetProcessType();
    int GetDataType();
    void SetDataType(string*);

private:
    void DataTypeText();
};

} // namespace EncoderDecoder
