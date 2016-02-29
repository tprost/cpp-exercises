#include <iostream>
#include <stdio.h>      /* printf */
#include <stdlib.h>     /* div, div_t */

int main(int argc, char *argv[])
{
  // read a string from cin
  std::string str;
  std::cin >> str;

  // compare the characters in the string
  // starting from the outside characters
  // and work our way inwards
  for (int beginning_char_index = 0;
       beginning_char_index <= str.length()/2 - 1;
       beginning_char_index++) {
    int end_char_index = str.length() - 1 - beginning_char_index;
    if (str[beginning_char_index] != str[end_char_index]) return 1;
  };
  return 0;
}
