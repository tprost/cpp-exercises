#include "temperature_converter.h"

int main(int argc, char *argv[])
{
  // read a string from cin
  std::string str;
  // std::cin >> str;
  if (IsTemperature_ConverterWithLinkedList(std::cin)) {
    return 0;
  };
  // if (IsTemperature_Converter(str)) {
  //   return 0;
  // };
  return 1;
}
