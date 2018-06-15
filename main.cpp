#include <iostream>

#include "updater/updater.hpp"

extern "C" void main_c(int argc, char *argv[]);

int main(int argc, char *argv[]) {

  Updater updater;
  updater.start();

  main_c(argc, argv);
  return EXIT_SUCCESS;
}
