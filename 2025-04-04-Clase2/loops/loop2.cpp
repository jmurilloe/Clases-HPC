#include <iostream> 

int main(void) 
{
    // int n la variable esta en el dominio main
    // for(n = 1; n<=10;++n) 

    for(int n = 1; n<=10;++n) // la variable n esta en el dominio for solamente
    {
        std::cout << n << std::endl;
    }
    
    // int a = n++; pos incremento
    // int b = ++n; pre incremento


  return 0;
}