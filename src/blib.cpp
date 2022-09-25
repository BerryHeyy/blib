#include "../include/blib.hpp"

int blib::get_bits(uint64_t n)
{
    int i = 0;
    while (n)
    {
        n = n >> 1;
        i++;
    }

    return i;
}
