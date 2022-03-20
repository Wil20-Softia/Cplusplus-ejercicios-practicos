#include <iostream>
#include <direct.h> //mkdir para crear rutas.
#include <cstring>

using namespace std;

void presentacion(){
	cout<<"\t\t\t******PROGRAMA QUE CREA DIRECTORIOS O CARPETAS Y ARCHIVOS******\n"<<endl;
}

void crear_directorio(){
	
	string opcion, ruta, carpeta, ruta_absoluta, archivo;
	
	cout<<"\t1. Crear Directorio o Carpeta."<<endl;
	cout<<"\t2. Crear Archivo."<<endl;
	
	getline(cin,opcion);
	
	cout<<"\n"<<endl;
	
	if(opcion == "1"){
		
		cout<<"Ruta: ";
		getline(cin,ruta);
		
		cout<<"Nombre de la Carpeta: ";
		getline(cin,carpeta);
		
		ruta_absoluta = ruta + carpeta;
		
		if(mkdir(ruta_absoluta.c_str()) == 0){
			cout<<"\n\t\t****** Carpeta creada exitosamente. ******"<<endl;
		}else{
			cout<<"\n\t\txxxxxx Ha ocurrido un error al crear la carpeta. xxxxxx"<<endl;
		}
		
		crear_directorio();
		
	}else if(opcion == "2"){
		
		cout<<"Ruta: ";
		getline(cin,ruta);
		
		cout<<"Nombre del Archivo: ";
		getline(cin,archivo);
		
		ruta_absoluta = ruta + archivo;
		
		FILE *arch;
		
		if(arch = fopen(ruta_absoluta.c_str(), "a")){
			cout<<"\n****** Archivo creado exitosamente. ******"<<endl;	
		}else{
			cout<<"\n\t\txxxxxx Error en la creacion del archivo. xxxxxx"<<endl;
		}
		
		crear_directorio();
		
	}else{
		crear_directorio();
	}
}

int main(){
	
	presentacion();
	crear_directorio();
	
	system("PAUSE");
	return 0;
}
