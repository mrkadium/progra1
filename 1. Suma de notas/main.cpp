#include <iostream>

using namespace std;
int main(){
    float suma = 0.0, num, promedio;
    int contador = 0;
    cout << "Teclee un número (-1 = fin):";
    cin >> num;
    while(num != -1){
        suma = suma + num;
        contador = contador + 1;
        cout << "Teclee un número (-1 = fin):";
        cin >> num;
    }
    if(contador>0){
       promedio = suma/contador;
       cout << "\nEl promedio es: " << promedio << endl;
    }
    else{
       cout << "\nNo se teclearosn valores" << endl;
    }
    return 0;
}
