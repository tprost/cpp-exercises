cmake_minimum_required(VERSION 2.8)
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wall")

project(palindrome_project)

enable_testing()

set(node_library_source_files
  src/node.h
  src/node.cc)

set(palindrome_library_source_files
  src/palindrome.h
  src/palindrome.cc)

add_library(palindrome_library STATIC
  ${palindrome_library_source_files})

add_library(node_library STATIC
  ${node_library_source_files})

target_link_libraries(palindrome_library
  node_library)

# Specify here the include directories exported
# by this library
target_include_directories(node_library PUBLIC src)

add_subdirectory(test)

add_executable(palindrome src/main.cc)

target_link_libraries(palindrome
  palindrome_library)
