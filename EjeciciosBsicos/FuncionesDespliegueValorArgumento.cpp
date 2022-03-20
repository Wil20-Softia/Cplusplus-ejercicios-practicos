/*
Escriba una plantilla de funcion llamada despliegue() que despliegue el valor del argumento unico
que se le transmite cuando es invocada la funcion.
*/

#include <iostream>
#include <conio.h>

using namespace std;

template <class TIPOD>
void despliegue(TIPOD);

int main(){
	
	int dato1 = 6;
	float dato2 = 56.45;
	double dato3 = 4.245445;
	char dato4 = 'w';
	
	despliegue(dato1);
	despliegue(dato2);
	despliegue(dato3);
	despliegue(dato4);
	
	getch();
	return 0;
}

template <class TIPOD>
void despliegue(TIPOD dato){
	cout<<"El datos es igual a: "<<dato<<endl;
}
