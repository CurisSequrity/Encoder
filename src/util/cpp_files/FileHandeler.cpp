// This is file handeler
// basically it have two functionism
// 1. Read Data From File 2. Write Data From File

#include "../header_files/FileHandeler.hpp"

bool FileHandeler::ReadText(const std::string& PATH, std::string& variable)
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

bool FileHandeler::ReadText(std::string& PATH, std::string& variable)
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

std::string FileHandeler::ReadText(std::string& PATH)
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

std::string FileHandeler::ReadText(const std::string& PATH)
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

bool FileHandeler::ReadImage(const std::string& PATH, std::vector<uint8_t>& data)
{
    ReadFile.open(PATH, std::ios::binary);
	std::vector<uint8_t> v{std::istreambuf_iterator<char>{ReadFile}, {}};
	data = v;
	ReadFile.close();
	return !(v.empty());
}

bool FileHandeler::ReadImage(std::string& PATH, std::vector<uint8_t>& data)
{
    ReadFile.open(PATH, std::ios::binary);
	std::vector<uint8_t> v{std::istreambuf_iterator<char>{ReadFile}, {}};
	data = v;
	ReadFile.close();
	return !(v.empty());
}

std::vector<uint8_t> FileHandeler::ReadImage(const std::string& PATH)
{
    ReadFile.open(PATH, std::ios::binary);
	std::vector<uint8_t> data{std::istreambuf_iterator<char>{ReadFile}, {}};
	ReadFile.close();
	return data;
}

std::vector<uint8_t> FileHandeler::ReadImage(std::string& PATH)
{
    ReadFile.open(PATH, std::ios::binary);
	std::vector<uint8_t> data{std::istreambuf_iterator<char>{ReadFile}, {}};
	ReadFile.close();
	return data;
}

bool FileHandeler::WriteText(const std::string& PATH, std::string& data)
{
    TempData = FileHandeler::ReadText(PATH);
    WriteFile.open(PATH);
    data = TempData + data;
    WriteFile << data << endl;

    WriteFile.close();

    return !(WriteFile.fail());
}

bool FileHandeler::WriteText(std::string& PATH, std::string& data)
{
    TempData = FileHandeler::ReadText(PATH);
    WriteFile.open(PATH);
    data = TempData + data;
    WriteFile << data << endl;

    WriteFile.close();

    return !(WriteFile.fail());
}

bool FileHandeler::WriteImage(const std::string& PATH, std::vector<uint8_t>& data)
{
    WriteFile.open(PATH, std::ios::binary);

	for(int i = 0; i < data.size(); i++)
	{
		WriteFile << data.at(i);
	}
	WriteFile.close();
	return true;
}

bool FileHandeler::WriteImage(std::string& PATH, std::vector<uint8_t>& data)
{
    WriteFile.open(PATH, std::ios::binary);

	for(int i = 0; i < data.size(); i++)
	{
		WriteFile << data.at(i);
	}
	WriteFile.close();
	return true;
}