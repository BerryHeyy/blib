cmake_minimum_required (VERSION 3.12)

project (blib VERSION 1.0.0 DESCRIPTION "Berrys Library")

set(SOURCES
    blib.cpp
)
list(TRANSFORM SOURCES PREPEND "src/")

add_library(blib SHARED ${SOURCES})
set_target_properties(blib PROPERTIES 
    VERSION ${PROJECT_VERSION}
    PUBLIC_HEADER include/blib.hpp)
include_directories(include/)

set_property(TARGET blib PROPERTY CXX_STANDARD 20)
