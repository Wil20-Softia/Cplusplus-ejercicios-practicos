#include <iostream>
#include <stdio.h>
#include <cstring>

using namespace std;

int main(int argc, char *argv[]){
	
	int total=0;
	FILE * archivo;
	archivo = fopen("prueba.txt","r");
	char linea[255];
	while(fgets(linea, sizeof(linea), archivo)){
		cout<<linea;
		
		//Parte para encontrar una palabra.
		string busca = linea;
		size_t aguja = busca.find("telefono");//busca o encuentra la palabra en la variable busca.
		//Si se a encontrado la palabra, entonces, aumentar en 1 a la variable total.
		if(aguja != string::npos){
			total++;
		}
	}
	
	fclose(archivo);
	
	cout<<"La palabra telefono se encuentra "<<total<<" veces en el archivo"<<endl;
	
	system("PAUSE");
	return 0;
}
