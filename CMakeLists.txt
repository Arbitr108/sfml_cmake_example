cmake_minimum_required(VERSION 3.10)

project("SFML CMake Example" VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
#set(CMAKE_CXX_FLAGS "-Wall -Wextra -Wpedantic -O3")
# set(SFML_STATIC_LIBRARIES TRUE)

add_library(Foo STATIC src/Foo.cpp)
add_executable(SFML_CMake_Example src/main.cpp)
target_include_directories(SFML_CMake_Example PUBLIC include)

find_package(SFML 2.5 COMPONENTS audio graphics window system REQUIRED)

target_link_libraries(SFML_CMake_Example Foo sfml-audio sfml-graphics sfml-window sfml-system)



