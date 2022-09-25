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

std::vector<uint8_t> blib::int_to_little_endian_byte_array(uint64_t value)
{
    std::vector<uint8_t> bytes;

    while (value != 0)
    {
        bytes.push_back(value & 0xFF);

        value >>= 8;
    }

    return bytes;
}

bool blib::is_hex_string_valid(std::string hex)
{
    return hex.compare(0, 2, "0x") == 0
        && hex.size() > 2
        && hex.find_first_not_of("0123456789abcdefABCDEF", 2) == std::string::npos;
}

std::vector<std::string> blib::split_string(std::string str, char delim)
{
    std::string line;
    std::vector<std::string> vec;
    std::stringstream ss(str);

    while (std::getline(ss, line, delim))
    {
        vec.push_back(line);
    }

    return vec;
}
