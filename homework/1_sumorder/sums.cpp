#include <iostream>
#include <cmath>

typedef float REAL;

REAL s1(int N);
REAL s2(int N);

int main(void)
{
    std::cout.precision(7);
    std::cout.setf(std::ios::scientific);

    int N = 1000000;
    for (int n = 1; n<=N; n++){
        REAL a = s1(n), b = s2(n);
        REAL c = std::abs(1.0-(a/b));
        std::cout << n << "\t" << a << "\t" << b << "\t" << c << "\n";
    }
    return 0;
}

REAL s1(int N)
{
    REAL sum = 0, partial = 0;
    for (REAL k = 1; k<=N; k++){
        partial = 1/k;
        sum += partial;
    }
    return sum;
}

REAL s2(int N)
{
    REAL sum = 0, partial = 0;
    for (REAL k = N; k>=1; k--){
        partial = 1/k;
        sum += partial;
    }
    return sum;
}