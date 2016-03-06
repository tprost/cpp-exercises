file(GLOB SRCS *.cc)

add_executable(test_line_count ${SRCS})

target_link_libraries(test_line_count
  line_count_library
  gtest_library
  gmock_library)

add_test(NAME test_line_count
  COMMAND test_line_count)


