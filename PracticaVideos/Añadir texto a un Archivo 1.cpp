#include <iostream>
#include <cstdlib>
#include <cstring>
#include <fstream>
using namespace std;

void aniadir();

int main(){
	aniadir();
	system("PAUSE");
	return 0;
}

void aniadir(){
	ofstream archivo;
	string texto;
	
	archivo.open("C:\\Users\\Wilson WeeNoO\\Documents\\Bloc de Notas\\Proyectos\\Cria de Pollos de Engorde.txt",ios::app);//ABRIMOS EL ARCHIVO EN AÑADIR
	
	if(archivo.fail()){
		cout<<"\n\t\t\tNO SE ENCONTRO EL ARCHIVO"<<endl;
		exit(1);
	}
	
	cout<<"\n\t\t\tDigite el Texto que quiere aniadir:"<<endl;
	getline(cin,texto);
	archivo<<texto<<endl;
	
	archivo.close();
	
}

