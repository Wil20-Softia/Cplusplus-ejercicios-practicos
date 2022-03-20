/*Hecho por: WILSON ESCALONA y DANIEL ROMERO....
Sección: 02.
Semestre: 04
Carrera: Ing. de Sistemas

Enunciado: Programa que invierta la cadena dada.*/

#include <iostream>
#include <cstring>
using namespace std;

int main(){
	
	char cadena[]="Invertir esta cadena dada";
	char cadena_result[strlen(cadena)];
	int h=strlen(cadena);
	
	cout<<" Cadena Original:\n"<<endl;
	cout<<cadena<<"\n"<<endl;
	cout<<" Cadena Invertida:\n"<<endl;
	
	for(int i=0; i<strlen(cadena); i++){
		
		cadena_result[i]=cadena[h-1];
		h--;
		
		if(cadena[0]){
			cadena_result[strlen(cadena)]='\0';
		}
	}
		
	cout<<cadena_result;
	cout<<"\n"<<endl;
	
	system("PAUSE");
	return 0;
}
