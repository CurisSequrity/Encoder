#pragma once

#include <iostream>

namespace Type
{
    
/*
Process type is to store the type of process we need to do
Example 
1 -> Encodation;
2 -> Decodation;
and so on;;
*/
inline int ProcessType;

/*
Data type is to store the type of Data we need to do
Example 
1 -> Text;
2 -> Image;
and so on;;
*/
inline int DataType;

}

class TypeSetter
{
public:
    void SetProcessType();
    void SetDataType();

private:
    void DataTypeText();
};
