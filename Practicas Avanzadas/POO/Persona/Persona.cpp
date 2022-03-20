#include <cstring>
#include <iostream>
#include "Persona.h"
using namespace std;

void Persona::asignar_nombre(string n){
 	nombre=n;
}
string Persona::mostrar_nombre(){
 	return nombre;
}
void Persona::asignar_cedula(string c){
 	cedula=c;
}
string Persona::mostrar_cedula(){
	return cedula;
}
void Persona::a_edad(int e){
 	edad=e;
}
int Persona::m_edad(){
 	return edad;
}
void Persona::a_direc(string d){
 	direccion=d;
}
string Persona::m_direc(){
 	return direccion;
}
 
Persona::Persona(){
 	nombre=" ";
 	cedula=" ";
 	edad=0;
 	direccion=" ";
}

Persona::~Persona(){
	
}
