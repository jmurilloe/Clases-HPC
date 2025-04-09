#include <iostream>
#include <cmath>

typedef float REAL;

int factorial(int n);
REAL fnaive(REAL x, int N);
REAL fsmart(REAL x, int N);

int main(void)
{
  std::cout.precision(16); std::cout.setf(std::ios::scientific);
  REAL x = 1.234534534;
  const REAL exact = std::exp(-x);
  for (int NMAX = 0; NMAX <= 100; ++NMAX) {
    std::cout << NMAX
              << "\t" << fnaive(x, NMAX)
              << "\t" << std::fabs(fnaive(x, NMAX) - exact)/exact
              << "\t" << fsmart(x, NMAX)
              << "\t" << std::fabs(fsmart(x, NMAX) - exact)/exact
              << std::endl;
  }
  return 0;
}

REAL fnaive(REAL x, int N)
{
    //TODO
    REAL sum = 0, partial = 0;
    for(int n = 0; n<N;++n){
        partial = std::pow(-x,n)/factorial(n);
        sum += partial;
    }
    return sum;
    
}

int factorial(int n)
{
  if (n <= 0) return 1;
  return n*factorial(n-1);
}

REAL fsmart(REAL x, int N)
{
    //TODO
}