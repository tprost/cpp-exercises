#include "palindrome.h"

bool IsPalindrome(std::string str) {
  // compare the characters in the string
  // starting from the outside characters
  // and work our way inwards
  for (int beginning_char_index = 0;
       beginning_char_index <= str.length()/2 - 1;
       beginning_char_index++) {
    int end_char_index = str.length() - 1 - beginning_char_index;
    if (str[beginning_char_index] != str[end_char_index]) return false;
  };
  return true;
}

// I don't know how to write classes yet
// so let's just use a struct
bool IsPalindromeWithLinkedList(std::istream &input_stream) {

  bool return_value = true;


  // build a linked list out of characters
  Node *first = NULL;
  Node *last = NULL;
  char character;
  Node *node = NULL;
  while (input_stream >> character) {
    node = new Node;
    node->character_ = character;
    if (first == NULL) {
      first = node;
      last = node;
    } else {
      last->next_ = node;
      node->previous_ = last;
      last = node;
    }
  }

  // compare the head and tail of the list
  // then compare the 2nd and N-1 nodes
  // etc.
  Node *outer = last;
  Node *inner = first;
  while (return_value &&
         outer != inner &&
         inner->next_ != NULL &&
         outer->previous_ != NULL &&
         inner->next_ != outer) {
    if (outer->character_ != inner->character_) {
      return_value = false;
    } else {
      outer = outer->previous_;
      inner = inner->next_;
    }
  }

  // destroy the linked list
  node = first;
  Node *delete_this_node = first;
  while (node != NULL) {
    delete_this_node = node;
    node = node->next_;
    delete delete_this_node;
  }

  return return_value;
}
