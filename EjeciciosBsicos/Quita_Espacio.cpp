/*Hecho por: WILSON ESCALONA y DANIEL ROMERO....
Sección: 02.
Semestre: 04
Carrera: Ing. de Sistemas

Enunciado: Programa que le elimine todos los espacios a la cadena
dada y coloque todas las s minuscula en s mayuscula.*/

#include <iostream>
#include <cstring>
using namespace std;

int main(){
	
	char cadena[]="La Ecuacion significa en estricto sentido igualdad, por lo que tanto el elemento que aparece a la izquierda como el que aparece a la derecha del signo de igual tienen el mismo valor.";
	char cadena_result[strlen(cadena)];
	int e=0;
	
	cout<<" Esta es la Cadena Original:\n"<<endl;
	cout<< cadena<<"\n"<<endl;
	
	cout<<" Esta es la Cadena Resuelta:\n"<<endl;
	
	
	for(int i=0; i<strlen(cadena); i++){
		
		
		if(cadena[i]=='\0'){
			cadena_result[i]='\0';
			break;
		}
		
		if(cadena[i]==' '){
			e=1;
		}
		
		if (cadena[i]=='s'){
			cadena[i]='S';
		}
		
		if(e==0){
			cadena_result[i]=cadena[i];
			cout<<cadena_result[i];
		}
		
		e=0;
	}
	
	cout<<"\n"<<endl;
	
	system("PAUSE");
	return 0;
}
