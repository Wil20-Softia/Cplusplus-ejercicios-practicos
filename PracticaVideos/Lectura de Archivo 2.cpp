#include <iostream>
#include <cstdlib>
#include <cstring>
#include <fstream>
using namespace std;

void mostrar_archivo();

int main(){
	mostrar_archivo();
	system("PAUSE");
	return 0;
}

void mostrar_archivo(){
	ifstream archivo;
	string texto, ubicacion;
	
	ub:
	cout<<"Introduzca la Ubicacion del archivo terminando en .txt: ";
	getline(cin,ubicacion);
	
	archivo.open(ubicacion.c_str(), ios::in);
	
	if(archivo.fail()){
		cout<<"\n\t\t\tERROR. Archivo no Encontrado"<<endl;
		goto ub;
	}
	
	while(!archivo.eof()){
		getline(archivo,texto);
		cout<<texto<<endl;
	}
	
	archivo.close();
}




