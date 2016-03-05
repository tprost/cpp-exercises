file(GLOB SRCS *.cc)

ADD_EXECUTABLE(test_node ${SRCS})

TARGET_LINK_LIBRARIES(test_node
  node_library
  gtest_library
  gmock_library)

add_test(NAME test_node
  COMMAND test_node)
