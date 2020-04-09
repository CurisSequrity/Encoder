#pragma once

#include "../../util/header_files/BaseHeaders.hpp"
#include "../../util/header_files/TypeSetter.hpp"
#include "../../util/header_files/GetData.hpp"
#include "../../util/header_files/strings.hpp"
#include "../../util/header_files/Log.hpp"

class TextEncoder
{
public:
    void SetInputType();
    void StartRealtimeEncoding();
    void EncodeDocumentData();
    void ShowEnocodeData();

private:
    void Encode();
};
