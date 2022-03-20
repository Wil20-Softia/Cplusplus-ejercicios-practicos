/*
Escriba un programa en C++ que devuelva la parte fraccionaria de cualquier numero introducido
por el usuario. Por ejemplo, si introduce el numero 256.879, deberia desplegarse el numero
0.879
*/

#include <iostream>
#include <conio.h>

using namespace std;

void pedirDatos();
float parteFraccionaria(float x);

float num;

int main(){
	
	pedirDatos();
	
	cout<<"La parte fraccionaria del numero es igual a: "<<parteFraccionaria(num)<<endl;
	
	getch;
	return 0;
}

void pedirDatos(){
	cout<<"Digite un Numero: ";
	cin>>num;
}

float parteFraccionaria(float x){
	
	int parteEntera = x;
	
	float resultado = x - parteEntera;
	
	return resultado;
}
