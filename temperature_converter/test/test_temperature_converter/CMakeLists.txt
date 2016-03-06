file(GLOB SRCS *.cc)

add_executable(test_temperature_converter ${SRCS})

TARGET_LINK_LIBRARIES(test_temperature_converter
  temperature_converter_library
  gtest_library
  gmock_library)

add_test(NAME test_temperature_converter
  COMMAND test_temperature_converter)
