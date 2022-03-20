/*
Ejercicio 1: escriba una funcion llamada mult() que acepte dos numeros en punto
flotante como parametros, multiplique estos dos numeros y despliegue el resultado.
*/

#include <iostream>
#include <conio.h>

using namespace std;

//Prototipos de Funciones.
void pedirDatos();
void mult(float x, float y);

float num1, num2;

int main(){
	
	pedirDatos();
	mult(num1,num2);
	
	getch();
	return 0;
}

void pedirDatos(){
	
	cout<<"Digite 2 Numeros: ";
	cin>>num1>>num2;
	
}

void mult(float x, float y){
	
	float multiplicacion = x * y;
	cout<<"La Multiplicacion es igual a: "<<multiplicacion<<endl;
	
}
