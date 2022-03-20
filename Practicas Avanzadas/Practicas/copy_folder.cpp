#include <iostream>
#include <direct.h>
#include <cstring>

using namespace std;

void copy_folder(string ruta, string destino){
	
	//Extraer el nombre de la carpeta que se quiere copiar.
	
	//Busca la barra invertidas para extraer el nombre de la carpeta.
	size_t aguja = ruta.rfind("\\");
	
	//Si a encontrado la ruta, Entonces.
	if(aguja != string::npos){
		
		//Modificar el destino agregando el nombre de la carpeta a copiar.
		destino = destino + "\\" + ruta.substr(aguja+1);
		
		//Crear la carpeta vacia.
		mkdir(destino.c_str());
		
		//String para crear el comando: xcopy ruta destino atributos.
		string cadena;
		cadena = "xcopy " + ruta + " " + destino + " /H /E";
		
		//Ejecutar el comando.
		system(cadena.c_str());
	}
}

void init(){
	
	cout<<"Ruta de la Carpeta a Copiar: ";
	string ruta;
	getline(cin,ruta);
	cout<<"Ruta en donde la quiere copiar: ";
	string destino;
	getline(cin,destino);
	copy_folder(ruta,destino);
	init();
}

int main(){
	
	init();
	
	system("PAUSE");
	return 0;
}
