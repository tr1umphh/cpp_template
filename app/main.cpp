/**
 * @file main.cpp
 * @brief Main file
 *
 */

#include "main.h"
#include "Animal.h"

int main(int argc, char *argv[]) {
  auto yellow_fg = fmt::fg(fmt::color::yellow);
  fmt::print(yellow_fg, "abc\n");
  fmt::print(fmt::fg(fmt::color::green_yellow),
             "This line is whatever color u want {}\n", wtf);

  Dog luci("Luci", 2);
  luci.greeting();
  return 0;
}
