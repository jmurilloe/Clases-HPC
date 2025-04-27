// a string is a dynamic array of char (similar to vector<char>)
// son modificables
// incluidos en la libreria string:
#include <string>
#include <iostream>


int main(void){
    std::string hw = "Hello";

    std::string s = hw;
    hw += "World!"; // el orden importa += acota hw = hw + "World!"
    std::cout << hw << "\n";
    std::cout << hw[0] << "\n";
    
    std::string st1 = "ola", st2 = "planeta<3";
    std::string suma = st1 + st2;
    std::string sumav = st2 + st1;
    std::cout << suma << "\n";
    std::cout << sumav << "\n";

// por su parte los char (ademas del clan) son los caracteres
// se pueden escribir como 'A' o en codigo ASCII 65 (el equivalente a A)

    char c1 = 'A';   
    char c2 = 65;  // ASCII code of 'A'
    std::cout << c1 << '\n';          // A
    std::cout << c2 << '\n';          // A
    std::cout << (c1 == c2) << '\n';  // 1
    std::string xd = "xyz"; 
    xd[1] = c1;
    std::cout << xd << '\n';           // xAz
    xd += c2;
    std::cout << xd << '\n';           // xAzA
    
    
    // hay caracteres especiales:
    // \n new line; \t tab; \' es para que ' no rompa la sintaxis;\" lo mismo pero con "; \\ es el backslash itself      
    

    // manipulacion de strings 

    //string s = "I am sorry, Dave." (no cronologicamente)(index starts at 0, spaces are also considered in indexation)

    // CAMBIAN EL STRING S
    //s.insert(5,"very ") => s = "I am very sorry, Dave." aka meta como index 5 v y luego 'ery '
    //s.erase(6, 2) => s = "I am sry, Dave."              aka en el index 6 borre 2 char hacia delante, incluyendo el index 6
    //s.replace(12, 5, "Frank") => s = "I am very sorry, Frank." aka en 12, incluyendo el 12 reemplaze 5 char por "Frank"
    //s.resize(4) => s = "I am"                           aka fuerze que s se vuelva un string de solo 4 char (primeros)
    //s.resize(20, '?') => s = "I am sorry, Dave.???"     aka fuerze que s tenga 20 char, pero como es menor el resto rellenelo de ?

    // NO CAMBIAN EL STRING S
    //s.find("r") => 7     aka busque el primer char r y digame que index tiene
    //s.rfind("r") => 7     aka busque el ultimo char r y digame que index tiene
    //s.find("X") => string::npos     aka no lo encontre
    //s.find('a',5) => 13     aka busque el primer char r, luego del char 5, y digame que index tiene
    //s.substr(5,6) => "sorry,"     aka genere un nuevo string, formado por 6 char a partir del index 5 de s
    //s.contains("sorry") => tru     aka s contiene "sorry"?
    //s.starts_with("I") => tru     aka s inicia con "I"?
    //s.ends_with("ave.") => tru     aka s termina con "ave."?

    // literals
    // 


    
    return 0;
}
