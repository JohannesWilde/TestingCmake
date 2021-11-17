
add_library(lib2
    file2.cpp
    )

target_include_directories(lib2
    PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include
    )

target_link_libraries(lib2
    PUBLIC lib1
    )
