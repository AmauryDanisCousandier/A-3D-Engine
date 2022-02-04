cmake_minimum_required(VERSION 3.1)
project(A3D-Engine)

include(${CMAKE_BINARY_DIR}/conanbuildinfo.cmake)
conan_basic_setup()

if(MSVC)
    SET(CMAKE_CXX_FLAGS "/W4 /EHsc /std:c++17")
else()
    SET(CMAKE_CXX_FLAGS "-Wall -Wextra -std=c++17 -L.")
endif()
file(GLOB_RECURSE SRCS "src/*.cpp")
add_executable(${PROJECT_NAME} ${SRCS})
target_link_libraries(${PROJECT_NAME} ${CONAN_LIBS})