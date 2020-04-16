#pragma once

#include "../../util/header_files/BaseHeaders.hpp"
#include "../../util/header_files/GetInput.hpp"
#include "../../util/header_files/GetData.hpp"
#include "../../util/header_files/strings.hpp"
#include "../../util/header_files/Log.hpp"

class TextEncoder
{
public:
    GetData *getData;
    GetInput *getInput;
    void SetInputType();
    void StartRealtimeEncoding();
    void EncodeFromDocument();
    void ShowEnocodeData();
    bool SaveData();

private:
    std::string TempData;
    void Encode(std::string &);
};