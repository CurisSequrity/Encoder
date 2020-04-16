// This is file handeler
// basically it have two functionism
// 1. Read Data From File 2. Write Data From File

#include "../header_files/FileHandeler.hpp"

bool FileHandeler::Read(const std::string& PATH, std::string& variable)
{
    ReadFile.open(PATH);
    while (std::getline(ReadFile, TempData))
    {
        if (!(PrevData.empty()))
        {
            TempData = PrevData + "\n" + TempData;
            PrevData = TempData;
        }
        else
            PrevData = TempData;
    }

    ReadFile.close(); //closing the file we open to read

    //storing the final data into the variable
    variable = PrevData;

    return !(ReadFile.fail());
}

bool FileHandeler::Read(std::string& PATH, std::string& variable)
{
    ReadFile.open(PATH);
    while (std::getline(ReadFile, TempData))
    {
        if (!(PrevData.empty()))
        {
            TempData = PrevData + "\n" + TempData;
            PrevData = TempData;
        }
        else
            PrevData = TempData;
    }
    ReadFile.close(); //closing the file we open to read

    //storing the final data into the variable
    variable = PrevData;

    return ReadFile.fail();
}

std::string FileHandeler::Read(const std::string& PATH)
{
    ReadFile.open(PATH);
    while (std::getline(ReadFile, TempData))
    {
        if (!(PrevData.empty()))
        {
            TempData = PrevData + "\n" + TempData;
            PrevData = TempData;
        }
        else
            PrevData = TempData;
    }
    ReadFile.close();
    return TempData;
}

std::string FileHandeler::Read(std::string& PATH)
{
    ReadFile.open(PATH);
    while (std::getline(ReadFile, TempData))
    {
        if (!(PrevData.empty()))
        {
            TempData = PrevData + "\n" + TempData;
            PrevData = TempData;
        }
        else
            PrevData = TempData;
    }
    ReadFile.close();
    return TempData;
}

bool FileHandeler::Write(const std::string& PATH, std::string& data)
{
    TempData = FileHandeler::Read(PATH);
    WriteFile.open(PATH);
    data = TempData + data;
    WriteFile << data << endl;

    WriteFile.close();

    return !(WriteFile.fail());
}

bool FileHandeler::Write(std::string& PATH, std::string& data)
{
    TempData = FileHandeler::Read(PATH);
    WriteFile.open(PATH);
    data = TempData + data;
    WriteFile << data << endl;

    WriteFile.close();

    return !(WriteFile.fail());
}