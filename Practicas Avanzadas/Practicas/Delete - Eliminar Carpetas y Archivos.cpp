#include <iostream>
#include <dirent.h>
#include <cstring>

using namespace std;

bool is_dir(string dir){
	DIR *directorio;
	if(directorio = opendir(dir.c_str())){
		closedir(directorio);
		return true;
	}else{
		false;
	}
}

bool is_file(string file){
	FILE *archivo;
	if(archivo = fopen(file.c_str(),"r")){
		fclose(archivo);
		return true;
	}else{
		return false;
	}
}

void EliminarArchivoDirectorio(string ruta){
	
	string comando = "";//si es directorio "rmdir", si es un archivo "del".
	
	if(is_dir(ruta)){
		comando = "rmdir \"" + ruta + "\" /s /q";
		system(comando.c_str());
		cout<<"Se consiguio el directorio"<<endl;
	}else if(is_file(ruta)){
		comando = "del \"" + ruta + "\"";
		system(comando.c_str());
	}else{
		cout<<"El Elemento no existe"<<endl;
	}
}

void init(){
	cout<<"Indica la ruta de la carpeta o archivo a eliminar: ";
	string ruta;
	getline(cin,ruta);
	EliminarArchivoDirectorio(ruta);
	init();
}

int main(){
	
	init();
	system("PAUSE");
	return 0;
}
