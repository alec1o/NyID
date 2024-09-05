cmake_minimum_required(VERSION 3.10)
project(NyID C)

set(CMAKE_C_STANDARD 99)

include_directories(src)
add_library(NyID STATIC src/nyid.c)

add_executable(NyIdTest tests/nyid_test.c)
target_link_libraries(NyIdTest PRIVATE NyID)

enable_testing()
add_test(NAME NyIdTest COMMAND NyIdTest)