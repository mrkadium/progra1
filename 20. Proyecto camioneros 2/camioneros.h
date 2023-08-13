#ifndef CAMIONEROS_H_INCLUDED
#define CAMIONEROS_H_INCLUDED

#include<cstdlib>
#include<iostream>
#include<fstream>
#include<string.h>
#include<windows.h>

using namespace std;

void menu();

    void listaConductores();
    void listaViajes();
    void listaPagos();

    void buscarPorNombre();
    void buscarPorCodigo();

    void calcularKilometros();
    void calcularSueldo();

    void registrarConductor();
        void ingresarNombre();
    void buscarConductor();
        void leerNombre();
    void modificarConductor();
        void ingresarViajes();
        void modificarNombre();
        void modificarViajes();
    void eliminarConductor();
        void eliminarViajesConductor();
    void salir();

int kilometros=0;
char nombreConductor1[20], nombreConductor2[20], nombreConductor3[20], apellidoConductor1[20], apellidoConductor2[20];
char auxNombre1[20], auxNombre2[20], auxNombre3[20], auxApellido1[20], auxApellido2[20];
char codigoChar[6], partida[60], destino[60];
int numeroCodigo=1;

void menu(){
    int opcion=0;
    do{
        cout<<"1. Registrar conductor"<<endl;
        cout<<"2. Buscar conductor (mostrar informacion)"<<endl;
        cout<<"3. Modificar conductor"<<endl;
        cout<<"4. Eliminar conductor"<<endl;
        cout<<"5. Salir"<<endl;
        cout<<"Que deseas hacer? ";
        cin>>opcion;
        switch(opcion){
            case 1:
                registrarConductor();
            break;
            case 2:
                buscarConductor();
            break;
            case 3:
                modificarConductor();
            break;
            case 4:
                eliminarConductor();
            break;
            case 5:
                salir();
            break;
            default:
                cout<<"Opcion Incorrecta!"<<endl;
        }
    }while(opcion!=5);
}

void registrarConductor(){
    ingresarNombre();
}

void ingresarNombre(){
    ofstream escritura; //para escribir nombre
    ifstream consulta; //para consultar el codigo
    char auxNombreConductor[20];
    bool repetido=false;
    char op='s';
    int codigo=1, auxNumero, formato;
    char inicial[4];
    escritura.open("conductores.txt", ios::out|ios::app);
    consulta.open("conductores.txt", ios::in);
    if(escritura.is_open() && consulta.is_open()){
            do{
                cout<<"Ingrese el primer nombre del conductor: ";
                cin>>nombreConductor1;
                cout<<"Ingrese el segundo nombre del conductor: ";
                cin>>nombreConductor2;
                cout<<"Ingrese el primer apellido del conductor: ";
                cin>>apellidoConductor1;
                cout<<"Ingrese el segundo apellido del conductor: ";
                cin>>apellidoConductor2;

                cout<<"Es "<<nombreConductor1<<" "<<nombreConductor2<<" "<<apellidoConductor1<<" "<<apellidoConductor2<<" correcto? s/n: "<<endl;
                auxNumero=1;
                cin>>op;
            }while(op!='s' && op!='S');
            //if(auxNombreConductor[0]==nombreConductor[0] && auxNumero==numeroCodigo){
            escritura<<nombreConductor1<<" "<<nombreConductor2<<" "<<apellidoConductor1<<" "<<apellidoConductor2<<" "<<nombreConductor1[0]<<nombreConductor2[0]<<apellidoConductor1[0]<<apellidoConductor2[0]<<numeroCodigo<<endl;
            cout<<"______________________________________"<<endl<<endl;
            cout<<"El nombre del conductor es: "<<nombreConductor1<<" "<<nombreConductor2<<" "<<apellidoConductor1<<" "<<apellidoConductor2<<endl;
            cout<<"El codigo del conductor es: "<<nombreConductor1[0]<<nombreConductor2[0]<<apellidoConductor1[0]<<apellidoConductor2[0]<<numeroCodigo<<endl;
            cout<<"______________________________________"<<endl<<endl;


    }else{
        cout<<"Error, no se pudo abrir el archivo"<<endl;
    }
    escritura.close();
    consulta.close();
}


void buscarConductor(){
    listaConductores();
    int op2=0;
    cout<<"Desea buscar por nombre o por codigo?: \n1. Por nombre\n2. Por codigo"<<endl;
    cin>>op2;
    switch(op2){
        case 1:
            buscarPorNombre();
        break;
        case 2:
            buscarPorCodigo();
        break;
    }
}


void listaConductores(){
    ifstream lectura;
    lectura.open("conductores.txt",ios::out|ios::in);
    if(lectura.is_open()){
        cout<<"****Conductores activos****"<<endl;
        cout<<"________________________________"<<endl<<endl;
        lectura>>nombreConductor1;
        while(!lectura.eof()){
            lectura>>nombreConductor2>>apellidoConductor1>>apellidoConductor2>>nombreConductor1[0]>>nombreConductor2[0]>>apellidoConductor1[0]>>apellidoConductor2[0]>>numeroCodigo;
            cout<<"Nombre: "<<nombreConductor1<<" "<<nombreConductor2<<" "<<apellidoConductor1<<" "<<apellidoConductor2<<endl;
            cout<<"Codigo: "<<nombreConductor1[0]<<nombreConductor2[0]<<apellidoConductor1[0]<<apellidoConductor2[0]<<numeroCodigo<<endl;
            lectura>>nombreConductor1;
            cout<<"________________________________"<<endl<<endl;
        }
    }else{
        cout<<"Error, el Archivo No se Pudo Abrir, No ha sido creado"<<endl;
    }
    lectura.close();
}

void leerNombre(){
}
void modificarConductor(){
    int op3=0;
    listaViajes();
    cout<<"Desea ingresar viaje de un conductor(1) o modificar el nombre de un conductor(2)?"<<endl;
    switch(op3){
        case 1:
            modificarViajes();
        break;
        case 2:
            modificarNombre();
        break;
    }
}

void ingresarViajes(){
    bool encontrado=false;
    int formato=0;
    ofstream escritura;
    ifstream lectura; //para leer registro de conductores y agregarle viajes a uno de ellos
    escritura.open("viajes.txt", ios::out|ios::app);
    lectura.open("conductores.txt", ios::in);
    listaConductores();
    if(escritura.is_open() && lectura.is_open()){
            cout<<"Escribe el primer nombre del conductor: ";
            cin>>auxNombre1;
            cout<<"Escribe el segundo nombre del conductor: ";
            cin>>auxNombre2;
            cout<<"Escribe el primer apellido del conductor: ";
            cin>>auxApellido1;
            cout<<"Escribe el segundo apellido del conductor: ";
            cin>>auxApellido2;
            lectura>>nombreConductor1;
            while(!lectura.eof()){
                lectura>>nombreConductor2>>apellidoConductor1>>apellidoConductor2>>nombreConductor1[0]>>nombreConductor2[0]>>apellidoConductor1[0]>>apellidoConductor2[0]>>numeroCodigo;
                if(strcmp(auxNombre1, nombreConductor1)==0 && strcmp(auxNombre2, nombreConductor2)==0 && strcmp(auxApellido1, apellidoConductor1)==0 && strcmp(auxApellido2, apellidoConductor2)==0){ //mostrará 0 si coinciden, y 1 si no
                    encontrado=true;
                    cout<<"______________________________________"<<endl<<endl;
                    cout<<"El nombre del conductor es: "<<nombreConductor1<<" "<<nombreConductor2<<" "<<apellidoConductor1<<" "<<apellidoConductor2<<endl;//<<", con código: "<<codigoCompleto;
                    cout<<"El codigo del conductor es: "<<nombreConductor1[0]<<nombreConductor2[0]<<apellidoConductor1[0]<<apellidoConductor2[0]<<numeroCodigo<<endl;
                    cout<<"______________________________________"<<endl<<endl;
                    cout<<"Ingrese el viaje: "<<endl;
                    cout<<"Punto de partida: ";
                    cin>>partida;
                    cout<<"Destino: ";
                    cin>>destino;
                    cout<<"Kilometros recorridos: ";
                    cin>>kilometros;
                    escritura<<nombreConductor1<<" "<<nombreConductor2<<" "<<apellidoConductor1<<" "<<apellidoConductor2<<" "<<nombreConductor1[0]<<nombreConductor2[0]<<apellidoConductor1[0]<<apellidoConductor2[0]<<numeroCodigo<<" "<<partida<<" "<<destino<<" "<<kilometros<<endl; //en lugar de nombreConductor va codigoCompleto

                    cout<<"****Viaje agregado al registro :D****"<<endl<<endl;
                }
                lectura>>nombreConductor1;
            }

            if(encontrado==false){
                cout<<"El conductor no fue encontrado, intente nuevamente"<<endl;
            }

    }else{
        cout<<"El archivo no fue abierto o no ha sido creado"<<endl;
    }
    lectura.close();
    escritura.close();
}
void modificarNombre(){
    /*char auxLetras[6];
    int auxCodigo;
    ofstream aux;
    ifstream lectura;
    bool encontrado=false;
    aux.open("auxiliar.txt", ios::out);
    lectura.open("conductores.txt", ios::in);
    if(aux.is_open() && lectura.is_open()){
        cout<<"Ingresa el código del conductor: "<<endl;
        cout<<"Letras (mayúsculas): ";
        cin>>auxLetras;
        cout<<"Numero: ";
        cin>>auxCodigo;
        lectura>>nombreConductor1;
        while(!lectura.eof()){
            lectura>>nombreConductor2>>apellidoConductor1>>apellidoConductor2>>nombreConductor1[0]>>nombreConductor2[0]>>apellidoConductor1[0]>>apellidoConductor2[0]>>numeroCodigo;
            if(strcmp(auxLetras[0], nombreConductor1[0])==0 && strcmp(auxLetras[1], nombreConductor2[0])==0 && strcmp(auxLetras[2], apellidoConductor1[0])==0 && strcmp(auxLetras[3], apellidoConductor2[0])==0)
    }
}*/ //buscar por nombre, no por codigo
}

void modificarViajes(){
    ingresarViajes();
}

void eliminarConductor(){
    listaConductores();
    ofstream aux;
    ifstream lectura;
    bool encontrado=false;
    aux.open("auxiliar.txt", ios::out);
    lectura.open("conductores.txt", ios::in);
    //lectura.open("viajes.txt", ios::in);
    if(aux.is_open() && lectura.is_open()){
        cout<<"Escribe el primer nombre del conductor: ";
        cin>>auxNombre1;
        cout<<"Escribe el segundo nombre del conductor: ";
        cin>>auxNombre2;
        cout<<"Escribe el primer apellido del conductor: ";
        cin>>auxApellido1;
        cout<<"Escribe el segundo apellido del conductor: ";
        cin>>auxApellido2;
        lectura>>nombreConductor1;
        while(!lectura.eof()){
            lectura>>nombreConductor2>>apellidoConductor1>>apellidoConductor2>>nombreConductor1[0]>>nombreConductor2[0]>>apellidoConductor1[0]>>apellidoConductor2[0]>>numeroCodigo;
            if(strcmp(auxNombre1, nombreConductor1)==0 && strcmp(auxNombre2, nombreConductor2)==0 && strcmp(auxApellido1, apellidoConductor1)==0 && strcmp(auxApellido2, apellidoConductor2)==0){
                encontrado=true;
                cout<<"****Conductor eliminado****"<<endl;
            }else{
                aux<<nombreConductor1<<" "<<nombreConductor2<<" "<<apellidoConductor1<<" "<<apellidoConductor2<<" "<<nombreConductor1[0]<<nombreConductor2[0]<<apellidoConductor1[0]<<apellidoConductor2[0]<<numeroCodigo<<endl;
            }
            lectura>>nombreConductor1;
        }
    }else{
        cout<<"No se pudo abrir el archivo o no ha sido creado"<<endl;
    }
    if(encontrado==false){
        cout<<"No se encontró ningun conductor con ese nombre "<<endl;
    }
    aux.close();
    lectura.close();
    remove("conductores.txt"); //para borrar el archivo
    rename("auxiliar.txt", "conductores.txt");
}

void buscarPorNombre(){

}
void buscarPorCodigo(){
}
void calcularKilometros(){
    //buscar conductor, leer kilometros, sumarlos en cada vuelta, guardarlo en otro archivo, junto con el sueldo, isss, etc
}
void calcularSueldo(){
}
void salir(){
}
void listaViajes(){
    /*listaConductores();
    ifstream lectura;
    lectura.open("conductores.txt",ios::out|ios::in);
    if(lectura.is_open()){ //tengo que pedir el codigo y luego, si coincide con alguien, mostrar los viajes
        cout<<"Conductores activos"<<endl;
        cout<<"________________________________"<<endl<<endl;
        lectura>>nombreConductor1;
        while(!lectura.eof()){
            lectura>>nombreConductor2>>apellidoConductor1>>apellidoConductor2>>nombreConductor1[0]>>nombreConductor2[0]>>apellidoConductor1[0]>>apellidoConductor2[0]>>numeroCodigo;
            cout<<"Nombre: "<<nombreConductor1<<" "<<nombreConductor2<<" "<<apellidoConductor1<<" "<<apellidoConductor2<<endl;
            cout<<"Codigo: "<<nombreConductor1[0]<<nombreConductor2[0]<<apellidoConductor1[0]<<apellidoConductor2[0]<<numeroCodigo<<endl;
            lectura>>nombreConductor1;
            cout<<"________________________________"<<endl<<endl;
        }
    }else{
        cout<<"Error, el Archivo No se Pudo Abrir, No ha sido creado"<<endl;
    }
    lectura.close();*/
}
void listaPagos(){
    listaConductores();
}


#endif // CAMIONEROS_H_INCLUDED
