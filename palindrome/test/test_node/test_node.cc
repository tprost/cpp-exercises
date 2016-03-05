#include "node.h"
#include "test_node.h"

using ::testing::Return;

NodeTest::NodeTest() {

}

NodeTest::~NodeTest() {};

void NodeTest::SetUp() {};

void NodeTest::TearDown() {};

TEST_F(NodeTest, CanReadFromIstream) {
  std::ostringstream out;
  Node node;
  node.character_ = 'c';
  out << node;
  EXPECT_EQ( "c", out.str() );
}

TEST_F(NodeTest, CanWriteToOStream) {
  std::istringstream in("pants");
  Node node;
  in >> node;
  EXPECT_EQ( 'p', node.character_ );
}
