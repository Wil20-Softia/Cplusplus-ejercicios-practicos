/*
Hacer 2 Estructuras una llamada promedio que tendra los siguientes campos: nota1, nota2 y nota3;
y otra llamada alumno que tendra los siguientes campos: nombre, sexo y edad; hacer que la estructura
promedio este anidada en la estructura alumno, luego pedir todos los datos para un alumno, luego
calcular su promedio, y por ultimo imprimir todos sus datos incluido el promedio.
*/

#include <iostream>
#include <conio.h>

using namespace std;

struct Promedio{
	float nota1;
	float nota2;
	float nota3;
};

struct Alumno{
	char nombre[20];
	char sexo[10];
	int edad;
	struct Promedio promAlu;
}alumno1;

int main(){
	
	float promedioAlumno = 0;
	
	cout<<"\t\tObteniendo datos del Alumno.\n"<<endl;
	cout<<"\tNombre: "; cin.getline(alumno1.nombre,20,'\n');
	cout<<"\tSexo: "; cin.getline(alumno1.sexo,10,'\n');
	cout<<"\tEdad: "; cin>>alumno1.edad;
	
	cout<<"\t\tNotas del Alumno.\n"<<endl;
	cout<<"\tNota 1: "; cin>>alumno1.promAlu.nota1;		
	cout<<"\tNota 2: "; cin>>alumno1.promAlu.nota2;		
	cout<<"\tNota 3: "; cin>>alumno1.promAlu.nota3;		
		
	promedioAlumno = (alumno1.promAlu.nota1+alumno1.promAlu.nota2+alumno1.promAlu.nota3)/3;
	
	system("cls");
	
	cout<<"\n\t\tImprimiendo Datos del Alumno.\n"<<endl;
	cout<<"\tNombre: "<<alumno1.nombre<<endl;
	cout<<"\tSexo: "<<alumno1.sexo<<endl;
	cout<<"\tEdad: "<<alumno1.edad<<" años"<<endl;
	cout<<"\tPromedio: "<<promedioAlumno<<endl;
	
	getch();
	return 0;
}
