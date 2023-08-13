#include <iostream>

using namespace std;

enum dias_semana{
    lunes, martes, miercoles, jueves, viernes, sabado, domingo //para que quede almacenado el numero y no el nombre
};

struct Fecha{
    int dia;
    int mes;
    int ano;
};
    struct Persona{
        char nombre[100];
        unsigned int edad;
        float altura, peso;
        Fecha fec;
    };
        struct Personal{
            Persona persona;
            float salario;
            int horas_semanales;
        };


int main()
{
    Personal empleado1;
    dias_semana hoy;

/*
    cout<<"Introduzca los datos"<<endl<<endl;
    cout<<"Nombre: ";
    cin.getline(empleado1.persona.nombre, 100);
    cout<<"Altura: ";
    cin>>empleado1.persona.altura;
    cout<<"Peso: ";
    cin>>empleado1.persona.peso;
    cout<<"Salario: ";
    cin>>empleado.salario;
    cout<<"Horas semanales: ";
    cin>>empleado.horas_semanales;
    cout<<"Edad: ";
    cin>>empleado1.persona.edad;
    cout<<"Dia de nacimiento: ";
    cin>>empleado1.persona.fec.dia;
    cout<<"Mes de nacimiento: ";
    cin>>empleado1.persona.fec.mes;
    cout<<"Año de nacimiento: ";
    cin>>empleado1.persona.fec.ano;

    cout<<"Sus datos son:"<<endl<<endl;
    cout<<"Nombre: ";
    cout<<empleado1.persona.nombre<<endl;
    cout<<"Ud nacio el: ";
    cout<<empleado1.persona.fec.dia<<"/"<<empleado1.persona.fec.mes<<"/"<<empleado1.persona.fec.ano<<endl;
    cout<<"Edad: ";
    cout<<empleado1.persona.edad;
    cout<<"Altura: ";
    cout<<empleado1.persona.altura;
    cout<<"Peso: ";
    cout<<empleado1.persona.peso;
    cout<<"Salario: ";
    cout<<empleado.salario;
    cout<<"Horas semanales: ";
    cout<<empleado.horas_semanales;
*/

    hoy = martes;
    cout<<"\n Hoy es: "<<hoy;

    return 0;
}
