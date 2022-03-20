#include <iostream>
#include <dirent.h>
#include <cstring>
#include <stdio.h>

using namespace std;

void copy_file(string ruta, string destino){
	
	FILE *archivo;
	string cadena;
	//Si el archivo se puede abrir, quiere decir que existe y, Entonces.
	if(archivo = fopen(ruta.c_str(),"r")){
		
		//se copia el archivo en el destino indicado.
		cadena = "copy " + ruta + " " + destino;
		system(cadena.c_str());
		
	}else{
		cout<<"EL ARCHIVO NO EXISTE"<<endl;
	}
	
}

void init(){
	cout<<"Ingrese la Ruta del archivo a copiar: ";
	string ruta;
	getline(cin,ruta);
	cout<<"Ingrese la Ruta donde se copiara: ";
	string destino;
	getline(cin,destino);
	copy_file(ruta,destino);
	init();
}

int main(){
	
	init();
	system("PAUSE");
	return 0;
}
