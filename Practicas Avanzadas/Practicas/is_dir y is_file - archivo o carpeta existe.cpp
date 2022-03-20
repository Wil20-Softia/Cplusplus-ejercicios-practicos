#include <iostream>
#include <dirent.h> //Para manejo de directorios

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

void init(){
	cout<<"\n\n\t\t\tBUSCADOR DE CARPETAS Y ARCHIVOS."<<endl;
	string elemento;
	getline(cin,elemento);
	
	if(is_dir(elemento)){
		cout<<"\n\t\tEl directorio o carpeta si exite"<<endl;
	}else if(is_file(elemento)){
		cout<<"\n\t\tEl archivo buscado si existe"<<endl;
	}else{
		cout<<"\n\t\tERROR. ELEMENTO NO EXISTENTE"<<endl;
	}
	
	init();
}

int main(){
	init();
	system("PAUSE");
	return 0;
}
