#include <iostream>

using namespace std;

int main()
{
    float n1=0, n2=0, n3=0, n4=0, n5=0, promedio=0;
    cout<<"Introduzca la primer nota: ";
    cin>>n1;
    cout<<"\nIntroduzca la segunda nota: ";
    cin>>n2;
    cout<<"\nIntroduzca la tercer nota: ";
    cin>>n3;
    cout<<"\nIntroduzca la cuarta nota: ";
    cin>>n4;
    cout<<"\nIntroduzca la quinta nota: ";
    cin>>n5;

    promedio=(n1+n2+n3+n4+n5)/5;
    cout<<"El promedio es: "<<promedio<<endl;
    cout<<"\n"<<n1<<", "<<n2<<", "<<n3<<", "<<n4<<", "<<n5<<", ";

    return 0;
}
