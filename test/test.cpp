#include "blib.hpp"

#define FAIL 1;
#define PASS 0;

int main()
{
    if (blib::get_bits(0b1101101) != 7) return FAIL;

    {
        std::vector<uint8_t> b = blib::int_to_little_endian_byte_array(0x12345678);

        if (b[0] != 0x78 || b[1] != 0x56 || b[2] != 0x34 || b[3] != 0x12) return FAIL;
    }

    if (!blib::is_hex_string_valid("0x12345121312")) return FAIL;
    
    {
        std::vector<std::string> s = blib::split_string("Foo bar bar foo", ' ');
        
        if (s[0] != "Foo" || s[1] != "bar" || s[2] != "bar" || s[3] != "foo") return FAIL;
    }

    return PASS;
}
