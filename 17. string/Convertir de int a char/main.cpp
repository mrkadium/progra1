#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include<cstdlib>
#include<fstream>
#include<string.h>
#include<windows.h>
#include<string>


using namespace std;



/*char convertirAChar(int);
void concatenarCodigo();

char nombreConductor[1]={'M'};
char numeroCodigoChar[6]={0};
char codigoConcatenado[6]={0};
int codigo=4913;
*/
int main()
{
    string texto1, texto2 = "Hola ", texto3("Que tal");
    int numero=49;
    string numeroCadena;
    itoa(numero, numeroCadena, 10);
    texto1 = texto2 + texto3 + " estas? " + numeroCadena;
    cout << texto1;
    return 0;
    //hacer que lea las iniciales (MARO) y el numero (1), comparar ambos con los registros, y si existe uno igual, numero+1;
}
/*
char convertirAChar(int numero){
    itoa(numero, numeroCodigoChar, 10); //el tercero es para el tipo de codificación (binaria, octaria, sexagesimal, etc), 10 para normal
    return numeroCodigoChar;
}
*/
