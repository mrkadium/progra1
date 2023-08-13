#include <iostream>

using namespace std;
//DIAGONAL PRINCIPAL DE UNA MATRIZ N*N (CUADRADA)
int main()
{
    int numeros[100][100], filas, columnas, sumaprinc=0, sumasec=0;

    cout<<"Digite el numero de filas: ";
    cin>>filas;
    cout<<"Digite el numero de columnas: ";
    cin>>columnas;

    //ALmacenando elementos en la matriz
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            cout<<"Digite un numero ["<< i <<"]["<<j<<"]: ";
            cin>>numeros[i][j];
        }
    }

    //Calculando la diagonal principal y secundaria
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
                if(i==j){
            cout<<numeros[i][j];
            cout<<"   ";
                }
        }
        cout<<endl<<endl;
    }


    return 0;
}
