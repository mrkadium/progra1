#include<cstdlib>
#include<iostream>
#include<fstream>
#include<string.h>
#include<windows.h>

using namespace std;

int main()
{
    char cadena[60];
    char iniciales[6];

    cout<<"Ingrese el nombre"<<endl;
    cout<<"Ejemplo 1: Mario Adalberto Rivera Olivo"<<endl;
    cout<<"Ejemplo 2: Rosa del Rosario Rosales Rosas"<<endl<<endl;
    cin.getline(cadena, 60);

    for(int i=0;i<='Z'; i++){
        if(cadena[i]<='Z'){
            iniciales=cadena[i];
        }
    }

    cout<<"\nEl nombre es: ";
    cout<<cadena<<endl;
    cout<<"Las inciales son: ";
    cout<<iniciales;

    return 0;
}
