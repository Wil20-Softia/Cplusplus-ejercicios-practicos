#include <iostream>
#include <conio.h>

using namespace std;

//Plantilla de una Funcion que permite que se inserte cualquier tipo de dato int, float, double.
//Acepta tipos de datos en general.
template <class TIPOD>

//Prototipo de la Funcion.
void mostrarAbs(TIPOD numero);

int main(){
	
	int num1 = -50;
	float num2 = -32.13;
	double num3 = -5.34235656;
	
	mostrarAbs(num1);
	mostrarAbs(num2);
	mostrarAbs(num3);
	
	getch();
	return 0;
}

template <class TIPOD>
void mostrarAbs(TIPOD numero){
	
	if(numero<0){
		numero *= -1;
	}
	
	cout<<"El valor absoluto es: "<<numero<<endl;
}
