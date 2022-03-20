/*Programar un algoritmo recursivo en c++ que permita invertir
un numero.*/

#include <iostream>
#include <stdlib.h>
using namespace std;


void invertir_numero(int n){
	
	
	if(n<10){
		cout<<n;
	}else{
		cout<<n%10;
		invertir_numero(n/10);
	}
}

int main(){
	
	int numero;
	
	cout<<"\t\tINVIERTE UN NUMERO:\n\n"<<endl;
	cout<<"Ingrese un numero para invertirlo: ";
	cin>>numero;
	
	cout<<"El numero invertido es: ";
	invertir_numero(numero);
	
	
	cout<<"\n\n"<<endl;
	system("PAUSE");
	return 0;
}

