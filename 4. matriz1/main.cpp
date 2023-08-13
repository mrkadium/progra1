#include <iostream>

using namespace std;

int main()
{
    int numeros[100][100], filas, columnas;

    cout<<"Digite el numero de filas: ";
    cin>>filas;
    cout<<"Digite el numero de columnas: ";
    cin>>columnas;

    //ALmacenando elementos en la matriz
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            cout<<"DIgite un numero ["<< i <<"]["<<j<<"]: ";
            cin>>numeros[i][j];
        }
    }

    //Mostrando la matriz
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            cout<<numeros[i][j];
        }
        cout<<"\n";
    }


    return 0;
}
