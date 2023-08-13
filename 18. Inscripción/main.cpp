#include <iostream>
#include <stdlib.h>
#include <string.h>

using namespace std;

int menu();
void registrarAlumno(string lstA[], string lstE[], string lstM[], int contA, float contC[]);
void buscarAlumno(string lstA[], string lstE[], string lstM[], int contA, float contC[]);

int main()
{
    string lstAlumnos[10];
    string lstEncargados[10];
    string lstMatriculantes[10];
    float lstCuotas[10];
    int contadorA = 0;

    int op;
    do{
        system("cls");
        cout << "Alumnos registrados: " << contadorA << endl;
        op = menu();
        system("cls");
        switch(op){
        case 1:
            registrarAlumno(lstAlumnos, lstEncargados, lstMatriculantes, contadorA, lstCuotas);
            contadorA++;
            break;
        case 2:
            buscarAlumno(lstAlumnos, lstEncargados, lstMatriculantes, contadorA, lstCuotas);
            break;
        case 3:
            cout << "Saliendo..." << endl;
            break;
        default:
            cout << "Opcion no valida :(" << endl;
            break;
        }
        system("pause");
    }while(op != 3);
}

int menu(){
    int opc;
    cout << "****** Registro de alumnos ******" << endl;
    cout << "\t1. Registrar alumno" << endl;
    cout << "\t2. Buscar alumno" << endl;
    cout << "\t3. Salir" << endl << endl;
    cout << "Digite la opcion que desea implementar: ";
    cin >> opc;
    return opc;
}

void registrarAlumno(string lstA[], string lstE[], string lstM[], int contA, float lstC[]){
    string nombre;
    string encargado;
    string matriculante;
    int op;
    float cuota;

    cout << "Ingrese el nombre del alumno: ";
    cin >> nombre;
    cout << "\nIngrese el nombre del que matricula: ";
    cin >> matriculante;
    cout << "\nIngrese el nombre del encargado: ";
    cin >> encargado;
    cout << "Parentesco con el encargado? \n1. Padre\n2. Madre" << endl;
    cout << "Digite la opcion: ";
    cin >> op;

    lstA[contA] = nombre;
    lstM[contA] = matriculante;
    lstE[contA] = encargado;

    if(contA < 5){ //ya que el vector empieza a contar desde 0, el quinto valor seria 4
        //Matricula padre o madre?
        switch(op){
            case 1: //Si es papa
                cuota = 31.50;
                break;
            case 2: //Si es mama
                cuota = 29.75;
                break;
            default:
                cuota = 35;
                break;
        }
        lstC[contA] = cuota;
    }else{
        //cuota normal
        cuota = 35;
        lstC[contA] = cuota;
    }
}

void buscarAlumno(string lstA[], string lstE[], string lstM[], int contA, float lstC[]){
    string nombre;
    cout << "Ingrese el nombre del alumno: ";
    cin >> nombre;
    bool encontrado = false;
    int contador = 0;

    while(contador < contA && !encontrado){
        //buscar coincidencia con el nombre del alumno
        if(lstA[contador] == nombre){ //si lo encuentra, devolvemos encontrado = true; y mostramos los datos
            encontrado = true;
            cout << "\n****** Datos del alumno ******" << endl;
            cout << "\tNombre: " << lstA[contador] << endl;
            cout << "\tEncargado: " << lstE[contador] << endl;
            cout << "\tCuota: $" << lstC[contador] << endl << endl;
        }else{ //si no lo encuentra, devolvemos encontrado = true;
            contador++;
        }
    }
    if(!encontrado){cout << "No se encontro el alumno :(" << endl;}
}
