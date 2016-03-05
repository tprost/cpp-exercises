#include <iostream>
#include <stdio.h>      /* printf */
#include <stdlib.h>     /* div, div_t */

class Node
{
 public:
  char character_;
  Node *next_;
  Node *previous_;
  Node();
};

std::ostream &operator<<(std::ostream &os, const Node &node);

std::istream &operator>>(std::istream &is, Node &node);
