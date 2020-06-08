// This is text Encoder Functions here all the text encodation systems are done
// Like Runtime Text Encodation Encode Text From Document
// Show Encoded Text Or Save Encoded Text In document

#include "../header_files/TextEncoder.hpp"

/*
** It will get text from user and store in DATA::RuntimeTextData which you will find in
** src/data/DATA::RuntimeTextData
** The data will be vanished if you will not save the data during programe running
*/
void TextEncoder::StartRealtimeEncoding()
{
    if (!(getData->GetRuntimeText(DATA::RuntimeTextData)))
    {
        cout << "Process Incomplete Some error occured" << endl;
        return;
    }
    Encode(DATA::RuntimeTextData);
    return;
}


/*
** This Function is for get data from the Document the encode that and store into DATA::DocTextData
*/
void TextEncoder::EncodeFromDocument()
{
    if (!(getData->GetDataFromDoc(DATA::DocTextData))) //  cheacking if  there is any error during data insertion
    {
        cout << "Process Incomplete Some error occured" << endl;
        return;
    }
    Encode(DATA::DocTextData);
    cout << "Succeed :)" << endl;
    return;
}


/*
** Simply it will determine whether user encode both type of data or not (Runtime data or data from doc)
** and check which type of data user encode then print according to that
*/
void TextEncoder::ShowEnocodeData()
{
    if (!(DATA::RuntimeTextData.empty()) && !(DATA::DocTextData.empty()))
    {
        while (true)
        {
            switch ( GetInput::GetShowDataType() )
            {
            case 1:
                std::cout << "Encoded Runtime Data is :- " << DATA::RuntimeTextData << std::endl;
                return;
                break;

            case 2:
                std::cout << "Encoded Data From Docoment :- " << DATA::DocTextData << std::endl;
                return;
                break;

            case 3:
                return;

            default:
                std::cout << "You entered a wrong number" << std::endl;
                break;
            }
        }
    }
    else if (!(DATA::RuntimeTextData.empty()) && (DATA::DocTextData.empty()))
    {
        std::cout << "Runtime Encoded Data is :- " << DATA::RuntimeTextData << std::endl;
        return;
    }
    else if ((DATA::RuntimeTextData.empty()) && !(DATA::DocTextData.empty()))
    {
        std::cout << "Encoded Data From Docoment is :- " << DATA::DocTextData << std::endl;
        return;
    }
    else
    {
        std::cout << "No Data to save" << std::endl;
        return;
    }
}

/*
** This function will save the data 
** You can find it in src/data/output/output.ecd
*/
bool TextEncoder::SaveData()
{
    if (!(DATA::RuntimeTextData.empty()) && !(DATA::DocTextData.empty()))
    {
        while (true)
        {
            
            switch ( GetInput::GetSaveDataType() )
            {
            case 1:
                return FileHandeler::WriteText(DATA::path.TEXT_OUPUT_PATH, DATA::RuntimeTextData);
                break;

            case 2:
                return FileHandeler::WriteText(DATA::path.TEXT_OUPUT_PATH, DATA::DocTextData);
                break;
            case 3:
                return true;
            default:
                std::cout << "You entered a wrong number" << std::endl;
                break;
            }
        }
    }
    else if (!(DATA::RuntimeTextData.empty()) && (DATA::DocTextData.empty()))
    {
        return FileHandeler::WriteText(DATA::path.TEXT_OUPUT_PATH, DATA::RuntimeTextData);
    }
    else if ((DATA::RuntimeTextData.empty()) && !(DATA::DocTextData.empty()))
    {
        return FileHandeler::WriteText(DATA::path.TEXT_OUPUT_PATH, DATA::DocTextData);
    }
    else
    {
        std::cout << "No Data to save" << std::endl;
        return false;
    }
}

/*
** This method is responsible to encode text datas
** basically This Algorithm is so basic and is in alfa mode
** in future we more plans with the algorithm
*/
void TextEncoder::Encode(std::string& data)
{
    long long Size = String::GetSize(data);

    for (long long temp = 0; temp < Size; temp++)
    {
        std::thread capitalAlfab([&]() {
            if (65 >= data[temp] <= 90)
                if (temp % 2)
                    data[temp] += 635;
            else if (data[temp] != 97 || 122)
                data[temp] = data[temp] << 3;
            
        });

        std::thread lowerAlfab([&]() {
            if (97 >= data[temp] <= 122)
                if (temp % 2)
                    data[temp] += 220;
                // LOG::SHOW(data[temp]);
        });

        if (capitalAlfab.joinable() && lowerAlfab.joinable())
        {
            capitalAlfab.join();
            lowerAlfab.join();
        }

        else
        {
            if (65 >= data[temp] <= 90)
            {
                if (temp % 2 )
                    data[temp] += 635;
                // LOG::SHOW(data[temp]);
            }
            else if (97 >= data[temp] <= 122)
            {
                if (temp % 2)
                    data[temp] += 220;
                // LOG::SHOW(data[temp]);
            }
            else
            {
                data[temp] = data[temp] << 3;
                // LOG::SHOW(data[temp]);
            }
        }
    }
}