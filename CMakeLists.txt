cmake_minimum_required(VERSION 3.27)
project(base)

set(CMAKE_CXX_STANDARD 20)

add_compile_options(-g -Wall)

find_package(fmt CONFIG REQUIRED)

file(GLOB SOURCES app/*.cpp)
add_subdirectory(tests)

include_directories(libs)
add_executable(${PROJECT_NAME} ${SOURCES})

target_link_libraries(${PROJECT_NAME} PRIVATE fmt::fmt pthread)
