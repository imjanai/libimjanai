
cmake_minimum_required(VERSION 3.16)

project(imjanai VERSION 0.1.0 LANGUAGES C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED ON)

add_library(imjanai STATIC
    src/electrical.c
    src/power.c
    src/current.c
)

target_include_directories(imjanai PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

add_executable(imjanai_example
    examples/main.c
)

target_link_libraries(imjanai_example PRIVATE imjanai)
