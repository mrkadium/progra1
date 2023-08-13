#include <iostream>

using namespace std;

void intercambio(int&, int&);
void seleccion(int A[], int);
void burbuja(int A[], int);
void insercionDirecta(int A[], int);
int busquedaSecuencial(int A[], int, int);

int main()
{
    int A[5]={51, 21, 39, 80, 36};
    int valor=39, encontrado;

    cout<<"Arreglo inicial: ";
     for(int i=0; i<5; i++){
        cout<<A[i]<<", ";
    }

    //seleccion(A,5);

    //burbuja(A, 5);

    //insercionDirecta(A, 5);



    encontrado=busquedaSecuencial(A, 5, valor); //Almacenar en variable para no tener que llamar la función tantas veces
    if(encontrado==-1){
        cout<<"\nValor no encontrado"<<endl;
    }else{cout<<"\nValor encontrado en " << encontrado<<endl<<endl;
    }



    //ordenados
    /*
    cout<<"\nArreglo ordenado: ";
    for(int i=0; i<5; i++){
        cout<<A[i]<<", ";
    }


    cout<<endl<<intercambio;
    */

    return 0;
}


void seleccion(int A[],int n){ //Método por selección
int menor=0;

    for(int j=0; j<n; j++){
            menor=j;
    for(int i=j; i<n; i++){
        if(A[i]<A[menor]){  //if(A[i]>A[mayor]) para mayor
            menor=i;
        }
    }


    intercambio(A[j], A[menor]);
    }
}


void burbuja(int A[], int n){ //Método de Burbuja
    for(int j=0; j<n-1; j++){
        bool cambio=false; //variable bandera, comprueba si hay cambio
        for(int i=0;i<n-1-j; i++){ //menos j, para no recorrer el arreglo otra vez :)
            if(A[i+1]<A[i]){
                intercambio(A[i], A[i+1]);
                cambio=true;
            }
        }
        if(!cambio){
            break;
        }
    }
}


void insercionDirecta(int A[], int n){ //Método por inserción directa
    int aux;
    for(int i=1; i<n; i++){ //i=1 porque el primer elemento está ya ordenado
        aux=A[i];
        for(int j=0; j<i; j++){
            if(A[j]>aux){
                for(int k=i; k>j; k--){
                    A[k]=A[k-1];
                }
                A[j]=aux;
                break;
            }
        }
    }

}


void intercambio(int& a, int& b){
    int aux=a;
    a=b;
    b=aux;
}


int busquedaSecuencial(int A[], int n, int valor){ //Búsqueda secuencial
    for(int i=0; i<n; i++){
        if(A[i]==valor){
            return i;
        }
    }
    return -1;
}
