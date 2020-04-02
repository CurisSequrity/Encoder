#pragma once

#include "BaseHeaders.hpp"

namespace Type
{

/*
Data type is to store the type of Data we need to do
Example 
1 -> Text;
2 -> Image;
and so on;;
*/
inline int DataType;

/*
Text Input type store the way we will get the text data from user
Example 
1. Runtime Text
2. Get data from a text document
*/
inline int TextInputType;

} // namespace Type

class TypeSetter
{
public:
    void SetDataType();
    void SetTextInputType();
};
