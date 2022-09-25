#include "blib.hpp"

int main()
{
    int bits = blib::get_bits(0x123);

    return bits == 6;
}
