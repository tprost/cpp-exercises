cmake_minimum_required(VERSION 2.8)
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wall")

project(temperature_converter_project)

enable_testing()

set(temperature_converter_library_source_files
  src/temperature_converter.h
  src/temperature_converter.cc)

add_library(temperature_converter_library STATIC
  ${temperature_converter_library_source_files})

# Specify here the include directories exported
# by this library
target_include_directories(temperature_converter_library PUBLIC src)

add_subdirectory(test)
