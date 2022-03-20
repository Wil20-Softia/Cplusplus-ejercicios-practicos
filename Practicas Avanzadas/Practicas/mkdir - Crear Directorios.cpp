#include <iostream>
#include <direct.h> //mkdir
#include <cstring>

using namespace std;

void crear_directorio(){
	
	cout<<"1. Crear Carpeta"<<endl;
	cout<<"2. Crear Archivo"<<endl;
	cout<<"Digite el numero: ";
	string opcion;
	getline(cin,opcion);
	if(opcion == "1"){
		cout<<"Ruta: ";
		string ruta;
		getline(cin,ruta);
		cout<<"Carpeta: ";
		string carpeta;
		getline(cin,carpeta);
		string ruta_absoluta = ruta + carpeta;
		//0 si se creo la carpeta correctamente.
		//-1 si no se creo la carpeta.
		if(mkdir(ruta_absoluta.c_str()) == 0){
			cout<<"CARPETA CREADA EXITOSAMENTE"<<endl;
		}else{
			cout<<"HA OCURRIDO UN ERROR FATAL. NO SE CREO LA CARPETA"<<endl;
		}
		
		crear_directorio();
		
	}else if(opcion == "2"){
		
		cout<<"Ruta: ";
		string ruta;
		getline(cin,ruta);
		cout<<"Archivo: ";
		string archivo;
		getline(cin,archivo);
		string ruta_absoluta = ruta + archivo;
		
		FILE * arch;
		if(arch = fopen(ruta_absoluta.c_str(),"a")){
			cout<<"ARCHIVO CREADO EXITOSAMENTE"<<endl;
		}else{
			cout<<"HA OCURRIDO UN ERROR FATAL. NO SE CREO EL ARCHIVO"<<endl;
		}
		
		crear_directorio();
		
	}else{
		crear_directorio();
	}
	
}

int main(){
	
	
	crear_directorio();
	
	system("PAUSE");
	return 0;
}
