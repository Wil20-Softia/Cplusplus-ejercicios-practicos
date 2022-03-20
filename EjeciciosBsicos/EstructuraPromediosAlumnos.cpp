/*
Hacer una estructura llamada alumno, en la cual se tendrán los siguientes campos:
Nombre, Edad, Promedio. Pedir los datos al usuario para 3 alumnos, comprobar cuál
de los 3 tiene el mejor promedio y posteriormente imprimir los datos del alumno.
*/

#include <iostream>
#include <conio.h>

using namespace std;

struct alumno{
	char nombre[30];
	int edad;
	double promedio;
}al[3];

int main(){
	
	for(int i=0; i<3; i++){
		fflush(stdin);
		cout<<"\t\t******INGRESO DE DATOS DE ESTUDIANTES******\n\n"<<endl;
		cout<<"\tEstudiante "<<i+1<<"\n"<<endl;
		cout<<"Nombre: "; cin.getline(al[i].nombre,30,'\n');
		cout<<"Edad: "; cin>>al[i].edad;
		cout<<"Promedio: ", cin>>al[i].promedio;
		system("cls");
	}
	
	if(al[0].promedio > al[1].promedio && al[0].promedio > al[2].promedio){
		cout<<"\n\n\t\tEl Estudiante "<<al[0].nombre<<", de "<<al[0].edad<<" anios de edad"<<endl;
		cout<<"\t\tTiene un Promedio de "<<al[0].promedio<<", y es el mejor Promedio de todos.";
	}else if(al[1].promedio > al[0].promedio && al[1].promedio > al[2].promedio){
		cout<<"\n\n\t\tEl Estudiante "<<al[1].nombre<<", de "<<al[1].edad<<" anios de edad"<<endl;
		cout<<"\t\tTiene un Promedio de "<<al[1].promedio<<", y es el mejor Promedio de todos.";
	}else{
		cout<<"\n\n\t\tEl Estudiante "<<al[2].nombre<<", de "<<al[2].edad<<" anios de edad"<<endl;
		cout<<"\t\tTiene un Promedio de "<<al[2].promedio<<", y es el mejor Promedio de todos.";
	}
	
	getch();
	return 0;
}
