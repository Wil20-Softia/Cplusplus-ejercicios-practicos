#include <iostream>
#include <cstring>
#include "Cliente.h"
using namespace std;

void Cliente::ingresar_nombre(string n){
	nombre=n;
}
void Cliente::ingresar_cedula(string c){
	cedula=c;
}
void Cliente::ingresar_direccion(string d){
	direccion=d;
}
void Cliente::ingresar_correo(string co){
	correo=co;
}
void Cliente::ingresar_telefono(double t){
	telefono=t;
}
string Cliente::mostrar_nombre(){
	return nombre;
}
string Cliente::mostrar_cedula(){
	return cedula;
}
string Cliente::mostrar_direccion(){
	return direccion;
}
string Cliente::mostrar_correo(){
	return correo;
}
double Cliente::mostrar_telefono(){
	return telefono;
}

Cliente::Cliente(){
	nombre="Wilson Escalona";
	cedula="26784724";
	telefono=7367219;
	correo="wilson_escalona97@hotmail.com";
	direccion="Betijoque,Inavi,Luis Mario Madrid";
}

Cliente::~Cliente(){	
}
