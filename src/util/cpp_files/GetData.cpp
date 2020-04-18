#include "../header_files/GetData.hpp"

/*
** This method get text data from terminal
*/
bool GetData::GetRuntimeText(std::string& data)
{
    std::cout << "Enter tour Text You Want to Encode :- "; 
    cin.ignore();
    getline(cin, data); // fixed looping issue when user want to enter a line
    
    return !(data.empty());
}
//end

/*
** THis method is to get data from Text Document
*/
bool GetData::GetDataFromDoc(std::string& data)
{
    return FileHandeler::ReadText(DATA::path.TEXT_INPUT_PATH, data);
}

std::string GetData::GetDataFromDoc()
{
    return FileHandeler::ReadText(DATA::path.TEXT_INPUT_PATH);
}
// end

/*
** Start of GetImage Funtions
*/
bool GetData::GetImageData(std::vector<uint8_t>& data)
{
    return FileHandeler::ReadImage(DATA::path.IMAGE_INPUT_PATH, data);
}

std::vector<uint8_t> GetData::GetImageData()
{
    return FileHandeler::ReadImage(DATA::path.IMAGE_INPUT_PATH);
}
//end