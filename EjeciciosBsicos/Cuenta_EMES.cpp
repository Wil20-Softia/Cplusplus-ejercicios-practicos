/*Programa que permita determinar cuantas letras "m" tiene una
frase*/
#include <iostream>
#include <cstring>
using namespace std;

int m(char cadena[]){
	int contador=0;
	
	for(int i=0; i<strlen(cadena); i++){
		if(cadena[i]=='m' || cadena[i]=='M'){
			contador++;
		}
	}
	
	return contador;
}

int main(){
	
	char cadena[]="";
	
	cout<<"Introduzca cadena"<<endl;
	gets(cadena);
	
	cout<<"En la cadena existen "<<endl;
	cout<<m(cadena)<< " m "<<endl;
	
	system("PAUSE");
	return 0;
}
