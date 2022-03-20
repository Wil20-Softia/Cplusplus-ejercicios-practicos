/*
Escriba una funcion llamada al_cuadrado() que calcule el cuadrado del valor
que se le transmite y despliegue el resultado. La función debera ser capaz
de elevar al cuadrado números flotantes.
*/

#include <iostream>
#include <conio.h>

using namespace std;


void pedirDatos();
void al_cuadrado(float x);

float numero;

int main(){
	
	pedirDatos();
	al_cuadrado(numero);
	
	getch();
	return 0;
}

void pedirDatos(){
	
	cout<<"Digite el Numero a elevar: ";
	cin>>numero;
	
}

void al_cuadrado(float x){
	
	float cuadrado = x * x;
	cout<<"El numero "<<x<<" elevado al cuadrado es igual a: "<<cuadrado<<endl;
	
}
