cmake_minimum_required(VERSION 2.8)
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wall")

project(line_count_project)

enable_testing()

set(line_count_library_source_files
  src/line_count.h
  src/line_count.cc)

add_library(line_count_library STATIC
  ${line_count_library_source_files})

# Specify here the include directories exported
# by this library
target_include_directories(line_count_library PUBLIC src)

add_subdirectory(test)

add_executable(line-count src/main.cc)

target_link_libraries(line-count
  line_count_library)
