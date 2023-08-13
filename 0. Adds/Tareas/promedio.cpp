#include <iostream>
using namespace std;
int main (){
/*
Cálculo de promedio de notas
Martes, 09/Agosto/2016

Este programa calcula el promedio de las notas

Mario Adalberto Rivera Olivo, Ingeniería en Sistemas Computacionales, Programación I: Grupo 01
*/

	float n1, n2, n3, promedio;
	n1=0;
	n2=0;
	n3=0;
	promedio=0;
	cout <<"Introduzca la primer nota: ";
	cin >>n1;
	cout <<"Introduzca la segunda nota: ";
	cin >>n2;
	cout <<"Introduzca la tercer nota: ";
	cin >>n3;
	cout <<"Su promedio es: ";
	promedio=(n1+n2+n3)/3 ;
	cout <<promedio;

	return 0;
}