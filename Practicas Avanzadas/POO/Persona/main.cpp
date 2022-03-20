#include <cstring>
#include <iostream>
#include "Persona.h"
using namespace std;

int main(){
	string nombre,cedula,dire;
	int edad;
	Persona P;
	cout<<"Introduzca los Datos de la Persona.\n"<<endl;
	
	cout<<"Nombre: "; getline(cin,nombre);
	cout<<"Cedula: "; getline(cin,cedula);
	cout<<"Edad: "; cin>>edad;
	fflush(stdin);
	cout<<"Direccion: "; getline(cin,dire);
	
	P.asignar_nombre(nombre);
	P.asignar_cedula(cedula);
	P.a_edad(edad);
	P.a_direc(dire);
	
	cout<<"\n"<<endl;
	cout<<P.mostrar_nombre()<<endl;
	cout<<P.mostrar_cedula()<<endl;
	cout<<P.m_edad()<<endl;
	cout<<P.m_direc()<<endl;
	
	cout<<"\n"<<endl;
	system("PAUSE");
	return 0;
}
