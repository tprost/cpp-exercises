#include "palindrome.h"

int main(int argc, char *argv[])
{
  // read a string from cin
  std::string str;
  // std::cin >> str;
  if (IsPalindromeWithLinkedList(std::cin)) {
    return 0;
  };
  // if (IsPalindrome(str)) {
  //   return 0;
  // };
  return 1;
}
