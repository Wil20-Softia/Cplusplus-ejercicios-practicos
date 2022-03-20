#include <iostream>
#include <cstdlib>
#include <cstring>
#include <fstream>
using namespace std;

void escribir();

int main(){
	escribir();
	system("PAUSE");
	return 0;
}

void escribir(){
	ofstream archivo; //VARIABLE QUE CREA EL ARCHIVO EN SALIDA
	string nomArchivo, frase;
	
	cout<<"Digite el Nombre del Archivo: ";
	getline(cin,nomArchivo);
	
	archivo.open(nomArchivo.c_str(), ios::out);//ABRIMOS Y CREAMOS EL ARCHIVO
	
	if(archivo.fail()){
		cout<<"No se Pudo Abrir el Archivo"<<endl;
		exit(1);//SALIR DEL PROGRAMA INMEDIATAMENTE
	}
	
	cout<<"\n\t\t\tDigite el Texto que agregara a el Archivo."<<endl;
	getline(cin,frase);
	
	archivo<<frase;//INGRESA EL TEXTO AL ARCHIVO CREADO.
	
	archivo.close();//CERRAMOS EL ARCHIVO.
}
