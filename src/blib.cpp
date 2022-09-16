#include "../include/blib.hpp"

template<std::unsigned_integral T>
uint32_t blib::get_bits(T n)
{
    uint32_t i = 0;
    while (n)
    {
        n = n >> 1;
        i++;
    }

    return i;
}
