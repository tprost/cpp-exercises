#include "line_count.h"
#include "test_line_count.h"

using ::testing::Return;

LineCountTest::LineCountTest() {

}

LineCountTest::~LineCountTest() {};

void LineCountTest::SetUp() {};

void LineCountTest::TearDown() {};

TEST_F(LineCountTest, ThreeLinesInInputStream) {
  std::istringstream input_string_stream("pants\nhello");
  int number_of_lines = CountLines(input_string_stream);
  EXPECT_EQ(number_of_lines, 2);
}

TEST_F(LineCountTest, ZeroLinesInInputStream) {
  std::istringstream input_string_stream("");
  int number_of_lines = CountLines(input_string_stream);
  EXPECT_EQ(number_of_lines, 0);
}
