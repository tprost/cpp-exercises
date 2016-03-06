#include "line_count.h"

// given a filename
// read the file and count the number of lines
// a line is defined as a string that
// has only one newline character and ends
// with the newline character
int CountLines(std::istream &input_stream) {
  int number_of_lines = 0;
  std::string line;
  while (std::getline(input_stream, line)) {
    number_of_lines++;
  }
  // char character;
  // while (input_stream.get(character)) {
  //   if (character == '\n') number_of_lines++;
  // }
  return number_of_lines;
}
