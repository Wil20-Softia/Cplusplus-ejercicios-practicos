/*
Utilizar las estructuras del problema EstructurasAlumnoPromedio,
pero ahora pedir los datos para N alumnos, y calcular cuál de todos tiene
el mejor promedio, e imprimir sus datos.
*/

#include <iostream>
#include <conio.h>

using namespace std;

struct Promedio{
	float nota1, nota2, nota3;
};

struct Alumno{
	char nombre[20];
	char sexo[10];
	int edad;
	struct Promedio prom;
}alum[100];

int main(){
	
	int cant_alum, posAlu=0;
	float mayPro=0;
	float promedios[100];
	
	cout<<"Cantidad de Alumnos: "; cin>>cant_alum;
	system("cls");
	cout<<"\n\n";
	for(int i=0; i<cant_alum; i++){
		fflush(stdin);
		cout<<"\t\tObteniendo datos del Alumno "<<i+1<<".\n"<<endl;
		cout<<"\tNombre: "; cin.getline(alum[i].nombre,20,'\n');
		cout<<"\tSexo: "; cin.getline(alum[i].sexo,10,'\n');
		cout<<"\tEdad: "; cin>>alum[i].edad;
	
		cout<<"\t\tNotas del Alumno "<<i+1<<".\n"<<endl;
		cout<<"\tNota 1: "; cin>>alum[i].prom.nota1;		
		cout<<"\tNota 2: "; cin>>alum[i].prom.nota2;		
		cout<<"\tNota 3: "; cin>>alum[i].prom.nota3;	
		
		promedios[i] = (alum[i].prom.nota1+alum[i].prom.nota2+alum[i].prom.nota3)/3;
		
		if(promedios[i] > mayPro){
			mayPro = promedios[i];
			posAlu = i;
		}
		
		cout<<"\n\n"<<endl;
	}
	
	cout<<"\t\tImprimiendo Datos del Alumno con Mejor Promedio.\n"<<endl;
	cout<<"\tNombre: "<<alum[posAlu].nombre<<endl;
	cout<<"\tSexo: "<<alum[posAlu].sexo<<endl;
	cout<<"\tEdad: "<<alum[posAlu].edad<<" años"<<endl;
	cout<<"\tPromedio: "<<promedios[posAlu]<<endl;
	
	
	getch();
	return 0;
}
