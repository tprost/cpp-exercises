#include "line_count.h"
#include "test_line_count.h"

using ::testing::Return;

LineCountTest::LineCountTest() {

}

LineCountTest::~LineCountTest() {};

void LineCountTest::SetUp() {};

void LineCountTest::TearDown() {};

TEST_F(LineCountTest, CountsLines) {
  std::istringstream input_string_stream("pants\nhello");
  int number_of_lines = CountLines(input_string_stream);
  EXPECT_EQ(number_of_lines, 2);
}