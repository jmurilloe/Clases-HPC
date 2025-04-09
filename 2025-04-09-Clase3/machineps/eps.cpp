#include <iostream>
#include <cstdlib>

typedef float REAL;

int main(int argc, char **argv)
{   
  std::cout.precision(20);
  std::cout.setf(std::ios::scientific);
  int N = std::atoi(argv[1]);

    // TODO
    REAL eps = 1.0, one = 1.0;

    for (int ii = 0;ii<N;++ii){
        eps /= 2.0;
        one  = 1.0+eps;

        std::cout<<one<<"\t"
                <<eps<<"\n";
                
    }

}