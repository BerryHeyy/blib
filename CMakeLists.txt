cmake_minimum_required (VERSION 3.12)

project (blib VERSION 1.0.0 DESCRIPTION "Berrys Library")

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(SOURCES
    blib.cpp
)
list(TRANSFORM SOURCES PREPEND "src/")

add_library(blib SHARED ${SOURCES})
set_target_properties(blib PROPERTIES 
    VERSION ${PROJECT_VERSION}
    PUBLIC_HEADER include/blib.hpp)
include_directories(include/)

# Testing
add_executable(blib_test test/test.cpp)
target_link_libraries(blib_test blib)

enable_testing()

add_test(
    NAME blib_test
    COMMAND $<TARGET_FILE:blib_test>
)
