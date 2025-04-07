Compilar es hacer transicion entre el codigo cpp y un programa ejecutable que entienda el computador.
En este proceso, suceden tres cosas: preprocesamiento, compilacion y linkeo.

    Las banderas modifican los comandos de consolas. Para el comando g++, la flag -o permite cambiar el nombre
    del archivo ejecutable. (pasar del predeterminado a.out a cualquiera); -E solo hace el preprocesamiento; adicionar 
    > new.cpp redirecciona la salida del comando al archivo new.cpp

1. El preprocesador lee las lineas que tienen '#' (tipo #include<iostream> incluye ~ 30K lineas)
2. La compilacion traduce el codigo a a lenguaje de maquina
3. El linker junta todos los archivos objeto en un solo ejecutable

    Comando wc: print newline, word, and byte counts for each file. En dicho orden reporta 3 numeros respectivos. La bandera -l
    imprime el numero de newlines, -m de characters y -c de bytes.

    Comando |: "la salida de lo de la izquierda es la entrada de lo de la derecha." Ej: g++ -E hola.cpp | wc -l

    Para g++, la flag -c genera un archivo tipo file.o. Que es un archivo binario, o archivo objeto. El comando nm permite leer
    simbolos