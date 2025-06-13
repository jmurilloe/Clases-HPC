#include <iostream>
#include <omp.h>

int i = 9;

int main(int argc, char *argv[]) {
  std::cout << "BEFORE\n";
#pragma omp parallel
  {
    int i = 9;
    std::cout << "Hola mundo\n";
    std::cout << &::i << "\t" << ::i << "\n";
    
  }
  std::cout << "AFTER\n";

  return 0;
}