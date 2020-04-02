#include "../header_files/textencoder.hpp"

void TextEncoder::SetInputType() {
    TypeSetter *typeSetter = new TypeSetter();
    typeSetter->SetTextInputType();
    return;
}

void TextEncoder::StartEncoding() {
    Encode();
}

void TextEncoder::Encode() {
    std::cout << "We are now in encode method" << std::endl;
}