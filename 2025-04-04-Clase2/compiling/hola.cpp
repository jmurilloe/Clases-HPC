#include <string>   // Incluye la libreria string. Variables tipo letras
#include <iostream> // Incluye la libreria iostream. Encabezado estandar ~ Libreria

int main(void)      // Unica  funcion obligatoria en todo codigo
{
    std::string name;                        // declarar una variable tipo string llamada name
    std::cout << "Please write your name:" << std::endl; // Imprimir en la pantalla
    //std::cin>> name;                       //Leer linea en la consola, y asignar lo que leyo a la variable name
    std::getline(std::cin, name);            // Funcion que lee toda la linea, (input o de donde va a leer, donde guarda lo que leyo)
    std::cout << "Hola " + name + "\n";      // con el ; se ubica donde termina una instruccion
    return 0;                                // la funcion main devuelve un int
}