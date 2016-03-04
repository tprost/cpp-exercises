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
