#ifndef BLIB_LIB
#define BLIB_LIB

#include <type_traits>
#include <concepts>
#include <cstdint>

namespace blib
{
    template<std::unsigned_integral T>
    uint32_t get_bits(T n);
}

#endif