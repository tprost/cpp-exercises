#include "node.h";

Node::Node() {
  next_ = NULL;
  previous_ = NULL;
}

std::ostream &operator<<(std::ostream &os, const Node &node)
{
  os << node.character_;
  return os;
}

std::istream &operator>>(std::istream &is, Node &node)
{
  char character;
  is >> character;
  node.character_ = character;
  return is;
}
