#include<iostream>
#include<cmath>

typedef float REAL;

REAL sumk(int k);

int main(void)
{
    std::cout.precision(7);
    std::cout.setf(std::ios::scientific);

    for (int k = 1; k<=1000;k++){
        std::cout << k << "\t" << sumk(k) << "\n";
    }
    
    return 0;
}

//implementation
REAL sumk(int k)
{
    REAL suma = 0.0;
    for(int ii = 1; ii <=k; ii++){
        suma += 0.1;
    }
    REAL aux = k/10.0; // se divide con un 10.0 en vez de un 10 para que la operacion total no se trunque a un entero
    return std::fabs(aux - suma);
}