#include <cstdio>
#include <iostream>

int main(void)
{
    int a = 1;
    
    while(a!=0){
    a *= 2;
    std::printf("%10d\n",a);
    }
    
    return 0;
}