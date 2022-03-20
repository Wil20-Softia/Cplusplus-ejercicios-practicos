#include <iostream>
#include <dirent.h>
using namespace std;
void list_dir(string dir){
	DIR *directorio;
	struct dirent *elemento;
	string elem;
	if(directorio = opendir(dir.c_str())){
		while(elemento = readdir(directorio)){
			elem = elemento->d_name;
			if(elem != "." && elem != ".."){
				cout<<elem<<endl;
			}
		}
	}
	closedir(directorio);
}
void init(){
	cout<<"Introduzca la Ruta del Directorio a Listar: ";
	string dir;
	getline(cin,dir);
	list_dir(dir);
	init();
}
int main(){
	init();
	system("PAUSE");
	return 0;
}
