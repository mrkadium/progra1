#include <iostream>

using namespace std;

int main()
{
    int op=0, nota[20];
    int nulo, pos, neg, promedio, suma, menor, mayor;

    for(int i=0; i<20; i++){
            nota[i]=0;
    }


    do{
        cout<<"1. Introducir numero"<<endl;
        cout<<"2. Contar"<<endl;
        cout<<"3. Calcular"<<endl;
        cout<<"4. Salir"<<endl;

        cout<<"Digite la opcion: ";
        cin>>op;

        switch(op){
            case 1:
                for(int i=0; i<20; i++){
                    cout<<"Digite la nota " << i <<": ";
                    cin>>nota[i];
                }
        break;
            case 2:
                nulo=0;
                pos=0;
                neg=0;
                for(int i=0; i<20; i++){
                    if(nota[i]==0;){
                        nulo++;
                    }else{
                        if(nota[i]>0{
                       pos++;
                       }else{
                        neg++;}

                }
                break;
                }



        cout<<"Nulo: "<< nulo <<endl;
        cout<<"Positivo: "<< pos <<endl;
        cout<<"Negativo: "<< neg <<endl;

            case 3:
                suma=0;
                menor=0;
                mayor=20;
                promedio=0;

                for(int i=0; i<20; i++){
                    if(nota[i]>nota[mayor]){
                        mayor=i;
                    }
                    if(nota[i]<nota[menor]){
                        menor=i;
                    }
                    suma+=nota[i];
                }
                promedio=suma/10;
            default:
                cout<<"Opcion no valida";

        }
        cout<<"promedio: "<< nulo <<endl;
        cout<<"mayor: "<< pos <<endl;
        cout<<"menor: "<< neg <<endl;

    }while(op!=4);





    return 0;
}
