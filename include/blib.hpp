/**
 * @file blib.hpp
 * @author Berry
 * @brief The include header of the library containing all declarations.
 * @version 1.0.0
 * @date 2022-09-25
 */

#ifndef BLIB_LIB
#define BLIB_LIB

#include <cstdint>
#include <vector>
#include <string>
#include <sstream>

/**
 * @brief The namespace used by the library.
 * 
 */
namespace blib
{
    /**
     * @brief Calculates the bit count of the provided number.
     * 
     * @param n Number to calculate bits of.
     * @return int Amount of bits the provided number consists of.
     */
    int get_bits(uint64_t n);

    /**
     * @brief Converts an integer to a vector of its constituent bytes in little endian order.
     * 
     * @param value Integer to convert to a byte array.
     * @return std::vector<uint8_t> Array of bytes in little endian order.
     */
    std::vector<uint8_t> int_to_little_endian_byte_array(uint64_t value);

    /**
     * @brief Checks if the provided string is a valid hex string. A valid ex string is a string which begins with "0x"
     * and contains only a minimum of one of the following characters: "0123456789abcdefABCDEF".
     * 
     * @param hex The hex string to check.
     * @return true If the string is a valid hex string.
     * @return false If the string is an invalid hex string.
     */
    bool is_hex_string_valid(std::string hex);

    /**
     * @brief Splits a string into a vector. The split delimiter is defined in the \p delim parameter.
     * 
     * @param str The string to split.
     * @param delim The delimiter to use.
     * @return std::vector<std::string> A vector containing the split string, excluding the delimiter.
     */
    std::vector<std::string> split_string(std::string str, char delim);
}

#endif