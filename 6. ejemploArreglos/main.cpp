#include <iostream>

using namespace std;

int main()
{
    int cantidad=30;
    float nota[cantidad];
    float promedio,suma;
    suma=0;
    for(int i=0;i<cantidad;i++)
    {
        cout << "Digite la Nota"<<i+1;
        cin>>nota[i];

    }
    for(int i=0;i<cantidad;i++)
    {
        cout << nota[i]<<"\t";
        suma+=nota[i];
    }
    promedio=suma/cantidad;
    cout << "El promedio de las 5 notas: ";
    cout << promedio;

    return 0;
}
