#include <iostream>

using namespace std;

struct Persona{
    char nombre[50],apellido[50];
    int edad;
    long telefono, dui; //recomendable que teléfono y dui sean de tipo char, ya que no hay necesidad de ser modificados;
    char sexo;
};

struct{
    char codigo[20];
    char nombre[100];
    char carrera[100];
}alumno;
typedef Persona pareja[2];

int main()
{

    pareja p;
    p[0].dui=1234;
    Persona david, david2={"Gildardo", "Castellanos", 123, 23425, 'M'};

    david.dui = 12345678;
    david.telefono = 12374587;
    david.sexo = 'M';
    cout << "Escriba el nombre" << endl;
    cin>>david.nombre;
    cout << "Escriba el apellido" << endl;
    cin>>david.apellido;

    cout<<"Escriba el codigo de estudiante: ";
    cin>>alumno.codigo;

    cout<<"Nombre: "<<david.nombre<<" "<<david.apellido<<endl;
    cout<<"Su codigo es: "<<alumno.codigo;

    cout<<"\n\nAlumno 2: "<<david2.nombre<<" "<<david2.apellido<<endl;
    cout<<"DUI: "<<p[0].dui<<endl;
    return 0;
}
