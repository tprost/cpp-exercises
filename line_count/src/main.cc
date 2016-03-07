#include <iostream>     // std::cout
#include <fstream>      // std::ifstream
#include "line_count.h"

int main(int argc, char *argv[])
{
  if (argc < 2) {
    std::cout << "error no file provided" << std::endl;
    return 1;
  }
  std::ifstream myfile(argv[1]);
  std::cout << CountLines(myfile) << std::endl;
  myfile.close();
  return 0;
}
