#include <iostream>
#include <cstring>
#include "Cuenta.h"
using namespace std;

void Cuenta::guardar_cuenta(int _cuenta){
	numero_cuenta=_cuenta;
}
double Cuenta::mostrar_cuenta(){
	return numero_cuenta;
}
void Cuenta::guardar_tipo(string _tipo){
	tipo=_tipo;
}
string Cuenta::mostrar_tipo(){
	return tipo;
}
void Cuenta::guardar_saldo(float _saldo){
	saldo=_saldo;
}
float Cuenta::mostrar_saldo(){
	return saldo;
}
void Cuenta::guardar_clave(int _clave){
	clave=_clave;
}
int Cuenta::mostrar_clave(){
	return clave;
}
void Cuenta::depositar(float _cantidad){
	saldo+=_cantidad;
}
void Cuenta::retirar(float _cantidad){
	if(_cantidad>saldo){
		cout<<"Fondos Insuficientes."<<endl;
	}else{
		saldo-=_cantidad;
		cout<<"Operacion Exitosa"<<endl;
	}
}
Cuenta::Cuenta(){
	
}
Cuenta::~Cuenta(){
	
}
