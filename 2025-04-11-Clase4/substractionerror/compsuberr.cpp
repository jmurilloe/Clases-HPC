#include <iostream>
#include <cmath>

typedef double REAL;
REAL s1(int N);
REAL s2(int N);
REAL s3(int N);

int main(void)
{
    std::cout.precision(16);
    std::cout.setf(std::ios::scientific);

    int NMAX = 100;
    for(int N = 1; N<=NMAX; N++){
        REAL a = s1(N), b = s2(N) , c = s3(N);
        std::cout << N << "\t" << a << "\t" << b << "\t" << c << "\t" << std::abs(a-c)/c << "\t" << std::abs(b-c)/c << "\n";
    }
    return 0;
}

REAL s1(int N)
{
    REAL sum = 0.0;
    for(int n = 1; n<=2*N; n++){
        REAL aux = (n/(n+1.0));
        sum += std::pow(-1,n)*aux;
    }
    return sum;

}

REAL s2(int N)
{
    REAL sum1 = 0.0, sum2 = 0.0;
    for(int n = 1; n<=N; n++){
        REAL aux1 = (((2.0*n)-1)/(2.0*n));
        REAL aux2 = ((2.0*n)/((2.0*n)+1.0));
        sum1 += aux1;
        sum2 += aux2;
    }
    return (sum2-sum1);

}
REAL s3(int N)
{
    REAL sum = 0.0;
    for(int n = 1; n<=N; n++){
        REAL aux = (1/((2.0*n)*((2.0*n)+1.0)));
        sum += aux;
    }
    return sum;

}