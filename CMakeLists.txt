cmake_minimum_required(VERSION 3.9)
project(A3D-Engine VERSION 1.0.0 DESCRIPTION "C++ 3D graphic library for game making, using sfml")
set(CMAKE_CXX_STANDARD 11)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)
add_library(A3D-Engine SHARED src/primeutil.cpp)

install(TARGETS A3D-Engine DESTINATION /usr/lib)
install(FILES include/primeutil.h DESTINATION include)