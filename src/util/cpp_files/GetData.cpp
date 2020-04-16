#include "../header_files/GetData.hpp"

/*
**This Method is to determine how the text input will happen
*/
// void GetData::GetText()
// {
//     switch (Type::TextInputType)
//     {
//     case 1:
//         GetData::GetRuntimeText();
//         break;

//     case 2:
//         //feature under progress
//         break;
//     default:
//         std::cout << "You entered wrong number" << std::endl;
//         return;
//     }
// }

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

/*
** THis method is to get data from Text Document
*/
bool GetData::GetDataFromDoc(std::string& data)
{
    return FileHandeler::Read(DATA::path.INPUT_PATH, data);
}