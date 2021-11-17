cmake_minimum_required(VERSION 3.13)

project(TestingCMake LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(TestingCMake main.cpp)

target_link_libraries(TestingCMake
    PRIVATE lib2
    )

add_subdirectory(dir1)
add_subdirectory(dir2)

get_target_property(lib1_include lib1 INCLUDE_DIRECTORIES)
get_target_property(lib2_include lib2 INCLUDE_DIRECTORIES)
get_target_property(lib1_interface_include lib1 INTERFACE_INCLUDE_DIRECTORIES)
get_target_property(lib2_interface_include lib2 INTERFACE_INCLUDE_DIRECTORIES)
get_target_property(lib1_link lib1 LINK_LIBRARIES)
get_target_property(lib2_link lib2 LINK_LIBRARIES)

message("lib1_include: ${lib1_include}")
message("lib2_include: ${lib2_include}")
message("lib1_interface_include: ${lib1_interface_include}")
message("lib2_interface_include: ${lib2_interface_include}")
message("lib1_link: ${lib1_link}")
message("lib2_link: ${lib2_link}")
#message(": ${}")
