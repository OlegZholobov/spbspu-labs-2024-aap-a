#include <iostream>
#include <read_string.hpp>
#include "exc_snd.hpp"

constexpr char exclude_characters[] = "abc";

int main()
{
  char* str = zholobov::read_string(std::cin);
  if (str == nullptr) {
    std::cerr << "Failed to read input string\n";
    return 1;
  }
  char* result = zholobov::exc_snd(str, exclude_characters);
  std::cout << result << "\n";
  std::free(result);
  std::free(str);
  return 0;
}