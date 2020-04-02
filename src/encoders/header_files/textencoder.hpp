#pragma once

#include "../../util/header_files/BaseHeaders.hpp"
#include "../../util/header_files/TypeSetter.hpp"
//#include "../../util/header_files/strings.hpp"

class TextEncoder
{
public:
    void SetInputType();
    void StartEncoding();

private:
    void Encode();
};
