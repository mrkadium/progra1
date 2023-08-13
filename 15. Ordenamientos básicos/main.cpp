#include <iostream>

using namespace std;
void intercambio(int&, int&);
void seleccion(int A[], int);
int main()
{
    int A[5]={51, 21, 39, 80, 36};


    cout<<"Arreglo inicial: ";
     for(int i=0; i<5; i++){
        cout<<A[i]<<", ";
    }

   seleccion(A,5);


    //ordenados
    cout<<"\nArreglo ordenado: ";
    for(int i=0; i<5; i++){
        cout<<A[i]<<", ";
    }


    cout<<endl<<intercambio;

    return 0;
}

void seleccion(int A[],int n){
int menor=0;


    //ordenamiento por seleccion
    for(int j=0; j<n; j++){
            menor=j;
            for(int i=j; i<n; i++){
        if(A[i]<A[menor]){  //if(A[i]>A[mayor]) para mayor
            menor=i;
        }
    }


    intercambio(A[j], A[menor]);
    }}

void intercambio(int& a, int& b){
    int aux=a;
    a=b;
    b=aux;
}
