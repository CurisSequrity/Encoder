#include "Encoder.hpp"



int main()
{
    Encoder *encoder = new Encoder(); // calling default constructor do the rest
    while( encoder->StartEncoding());
    return 0;
}