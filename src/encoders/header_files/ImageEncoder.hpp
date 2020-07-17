#include "../../util/header_files/BaseHeaders.hpp"
#include "../../util/header_files/BaseHeaders.hpp"
#include "../../util/header_files/GetInput.hpp"
#include "../../util/header_files/GetData.hpp"
#include "../../util/header_files/strings.hpp"
#include "../../util/header_files/Log.hpp"
class ImageEncoder{

public:
    GetData *getData;
    void PullImage(void);
    bool SaveData();
    void ShowData();

private:
    std::string TempData;
    void Encode(std::vector<uint8_t> &);
};