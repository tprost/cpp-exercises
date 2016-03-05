cmake_minimum_required(VERSION 2.8)
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wall")

project(palindrome_project)

enable_testing()

set(palindrome_library_source_files
    src/node.h
    src/node.cc
    src/palindrome.h
    src/palindrome.cc
)

# Declare the library
add_library(palindrome_library STATIC
    ${palindrome_library_source_files}
)

add_executable(palindrome src/main.cc)

target_link_libraries(palindrome
    palindrome_library
)
