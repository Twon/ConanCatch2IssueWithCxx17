cmake_minimum_required(VERSION 3.14)

project(ConanCatch2IssueWithCxx17)

list(APPEND CMAKE_PREFIX_PATH ${CMAKE_BINARY_DIR})

find_package(Catch2)

add_executable(ConanCatch2IssueWithCxx17)
target_sources(ConanCatch2IssueWithCxx17 
    PRIVATE
        main.cpp
)
target_link_libraries(ConanCatch2IssueWithCxx17
    PRIVATE
        Catch2::Catch2WithMain
)
set_target_properties(ConanCatch2IssueWithCxx17
    PROPERTIES
        CXX_STANDARD 17
        CXX_STANDARD_REQUIRED ON
        CXX_EXTENSIONS OFF
)