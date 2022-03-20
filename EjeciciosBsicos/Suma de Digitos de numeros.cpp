/*Programar un algoritmo recursivo en c++ que permita sumar los digitos 
de un numero dado por el teclado.*/

#include <iostream>
#include <stdlib.h>
using namespace std;

int suma_digito(long n){
	
	if(n<10){
		return n;
	}else{
		return (n%10)+suma_digito(n/10);
	}
}

int main(){
	
	long numero;
	
	cout<<"\t\tSUMA LOS DIGITOS DE UN NUMERO:\n"<<endl;
	cout<<"Ingrese el numero: ";
	cin>>numero;
	
	cout<<"La Suma de los Digitos del Numero es = "<<suma_digito(numero)<<endl;
	
	cout<<"\n\n"<<endl;
	system("PAUSE");
	return 0;
}
