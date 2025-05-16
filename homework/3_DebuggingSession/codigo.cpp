#include <iostream>
#include <cstdlib>
#include <cmath>

int foo(int a, int b);
int bar(int a, int b);
double baz(double x);
void print_array(const double data[], const int & size);

int main (int argc, char **argv)
{
  int ii, jj;
  ii =  0;
  jj = -1;
  foo(ii, jj);
  foo(jj, ii);
 
  baz(25.9);

  const int NX = 2, NY = 3, NZ = 4;
  double *x, y[NY], z[NZ];
  x = new double [NX];
  int  kk;
  print_array(x, NX);
  print_array(y, NY);
  print_array(z, NZ);
  std::cout << std::endl;

  for (ii = 0; ii < NX; ++ii) {
    x[ii] = ii; // se pide acceder a la indice -1 de un array
  }
  print_array(x, NX); // se pide acceder al indice 2 y 3 de un arreglo que solo tiene 2 elementos
  print_array(y, NY);
  print_array(z, NZ);  // se pide acceder al indice 2 y 3 de un arreglo que solo tiene 2 elementos
                            // acceder a indice 4, 5 y 6 en un arreglo de 4 elementos
  std::cout << std::endl;
  for (jj = 0; jj < NY; ++jj) {
    x[ii-1] = ii; //se pide rellenar el indice 2 en un arreglo que solo tiene 2 elementos
    y[jj] = jj;
  }
  //print_array(x-1, 1); // se pide acceder a una parte de la memoria que no corresponde a x
  //print_array(y-NZ, NZ); // restar dos tipos de variables diferentes
  //print_array(z + NZ + NY, NX); // sumar dos tipos de variables diferentes
  std::cout << std::endl;
delete[] x;
   return EXIT_SUCCESS;
}

int foo(int a, int b)
{
  if ((a == 0) || (b == 0)){
    return 0;
  }
  return a/b + b/bar(a, b) + b/a;
}

int bar(int a, int b)
{
  unsigned int c = a;
  return c + a - b;
}

double baz(double x)
{
  if (x = 0) return 0;
  double v = 1-(x+1);
  return std::sqrt(x);
}

void print_array(const double data[], const int & size)
{
  std::cout << std::endl;
  for (int ii = 0; ii < size; ++ii) {
    std::cout << data[ii] << "  " ;
  }
}