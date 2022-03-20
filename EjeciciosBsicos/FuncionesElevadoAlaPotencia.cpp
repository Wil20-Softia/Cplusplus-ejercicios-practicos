/*
Escriba una funcion nombrada funpot() que eleve un numero entero que se le
transmita a una potencia en numero entero positivo y despliegue el resultado.
El numero entero positivo debera ser el segundo valor transmitido a la funcion.
*/

#include <iostream>
#include <conio.h>

using namespace std;

void pedirDatos();
void funpot(int x, int y);

int num, exp;

int main(){
	
	cout<<"\t\tCalcula la Potencia de un numero.\n"<<endl;
	
	pedirDatos();
	funpot(num,exp);
	
	getch();
	return 0;
}

void pedirDatos(){
	
	cout<<"\tDigite un numero: ";
	cin>>num;
	cout<<"\tDigite el exponente: ";
	cin>>exp;
}

void funpot(int x, int y){
	
	long resultado=1;
	
	for(int i=1; i <= y; i++){
		resultado *= x;
	}
	
	cout<<"\n\tEl resultado es igual: "<<resultado<<endl;
	
}
