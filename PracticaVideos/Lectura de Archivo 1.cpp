#include <iostream>
#include <cstdlib>
#include <cstring>
#include <fstream>
using namespace std;

void lectura();

int main(){
	lectura();
	system("PAUSE");
	return 0;
}

void lectura(){
	ifstream archivo;//VARIABLE QUE CREA EL ARCHIVO EN ENTRADA
	string texto;
	
	archivo.open("WilsonWeeNoo.txt",ios::in);//ABRIMOS EL ARCHIVO EN MODO LECTURA
	
	if(archivo.fail()){
		cout<<"\n\t\t\tERROR. Archivo no Existente"<<endl;
		exit(1);
	}
	
	while(!archivo.eof()){
		getline(archivo,texto);
		cout<<texto<<endl;
	}
	
	archivo.close();//CERRAMOS EL ARCHIVO
}
