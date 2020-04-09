#include "../header_files/TextEncoder.hpp"

/*
**It will get text from user and store in DATA::RuntimeTextData.hpp which you will find in
**src/DATA::RuntimeTextData/runtime_data
*/
void TextEncoder::StartRealtimeEncoding()
{
    GetData *getData = new GetData();
    DATA::RuntimeTextData = getData->GetRuntimeText();
    Encode();
}

/*
** This method is to encode text DATA::RuntimeTextData
*/
void TextEncoder::Encode()
{
    long long Size = String::GetSize(DATA::RuntimeTextData);

    for (long long temp = 0; temp < Size; temp++)
    {
        std::thread capitalAlfab([&]() {
            if (65 >= DATA::RuntimeTextData[temp] <= 90)
            {
                DATA::RuntimeTextData[temp] = DATA::RuntimeTextData[temp] + 635;
                LOG::SHOW(DATA::RuntimeTextData[temp]);
            }
        });

        std::thread lowerAlfab([&]() {
            if (97 >= DATA::RuntimeTextData[temp] <= 122)
            {
                DATA::RuntimeTextData[temp] = DATA::RuntimeTextData[temp] + 220;
                LOG::SHOW(DATA::RuntimeTextData[temp]);
            }
        });

        if (capitalAlfab.joinable() && lowerAlfab.joinable())
        {
            capitalAlfab.join();
            lowerAlfab.join();
        }

        else
        {
            if (65 >= DATA::RuntimeTextData[temp] <= 90)
            {
                DATA::RuntimeTextData[temp] = DATA::RuntimeTextData[temp] + 635;
                // LOG::SHOW(DATA::RuntimeTextData[temp]);
            }
            else if (97 >= DATA::RuntimeTextData[temp] <= 122)
            {
                DATA::RuntimeTextData[temp] = DATA::RuntimeTextData[temp] + 220;
                // LOG::SHOW(DATA::RuntimeTextData[temp]);
            }
            else
            {
                DATA::RuntimeTextData[temp] = DATA::RuntimeTextData[temp] + 220;
                // LOG::SHOW(DATA::RuntimeTextData[temp]);
            }
        }
    }
}

void TextEncoder::ShowEnocodeData()
{
    if (String::GetSize(DATA::RuntimeTextData) == 0)
    {
        std::cout << "No DATA::RuntimeTextData To Show" << std::endl;
        return;
    }
    else
    {
        std::cout << "Your Encoded Text :- " << DATA::RuntimeTextData << std::endl;
    }
}