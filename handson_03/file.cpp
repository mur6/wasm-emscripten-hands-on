#include <string>
#include <streambuf>
#include <fstream>
#include <iostream>

int main(int argc, char **argv) {
  std::ifstream t("hello_world.txt");
  std::string str((std::istreambuf_iterator<char>(t)), std::istreambuf_iterator<char>());
  std::cout << "Content=[" << str << "]" << std::endl;
}
