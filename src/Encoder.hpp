#pragma once

#include "util/header_files/BaseHeaders.hpp"
#include "util/header_files/GetInput.hpp"
#include "encoders/header_files/TextEncoder.hpp"
#include "util/header_files/Log.hpp"

class Encoder
{
public:
    Encoder();

private:
    void TextEncoding();
    GetInput *getInput = new GetInput();
    TextEncoder *textEncoder = new TextEncoder();
};
