#include <iostream>
#include <stdio.h>
#include <cstring>

using namespace std;

/*
Modo w = trunca a longitud cero o crea un fichero de texto para escribir.
Modo a = añade, abre o crea un fichero de texto para escribir al final.
*/

void init(){
	FILE * archivo;
	archivo = fopen("prueba.txt","a");
	char linea[255];
	cout<<"Escribe: ";
	cin.getline(linea,sizeof(linea));
	strcat(linea,"\n");
	fputs(linea,archivo);
	fclose(archivo);
	cout<<"1. Segir Escribiendo -- 2. Salir: ";
	string opc;
	getline(cin,opc);
	if(opc == "1"){
		init();
	}
}

int main(int argc, char *argv[]){
	cout<<"1. Segir Escribiendo -- 2. Salir: ";
	string opc;
	getline(cin,opc);
	if(opc == "1"){
		init();
	}
	
	system("PAUSE");
	return 0;
}
