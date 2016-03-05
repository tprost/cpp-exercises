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

bool IsPalindrome(std::string);

bool IsPalindromeWithLinkedList(std::istream &input_stream);
