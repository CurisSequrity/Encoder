#include "../header_files/ImageEncoder.hpp"

//under development

void ImageEncoder::PullImage()
{
    if (!getData->GetImageData(DATA::ImageData))
    {
        std::cout << "Something Went Wrong" << std::endl;
        return;
    }

    this->Encode(DATA::ImageData);
    std::cout << "Success" << std::endl;
}

void ImageEncoder::Encode(std::vector<uint8_t> &data)
{
    // under Progress
    return;
}

bool ImageEncoder::SaveData()
{
    if (DATA::ImageData.empty())
    {
        std::cout << " No data threr to save" << std::endl;
    }
    return FileHandeler::WriteImage(DATA::path.IMAGE_OUTPUT_PATH , DATA::ImageData );
}
void ImageEncoder::ShowData()
{
    if (DATA::ImageData.empty())
    {
        std::cout << " data empty" << std::endl;
        return;
    }

    for (auto &i : DATA::ImageData)
    std::cout << i;
}