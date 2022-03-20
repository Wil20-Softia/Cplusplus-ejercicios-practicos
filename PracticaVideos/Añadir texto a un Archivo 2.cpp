#include <iostream>
#include <cstdlib>
#include <cstring>
#include <fstream>
using namespace std;

void usu_aniadir();

int main(){
	usu_aniadir();
	system("PAUSE");
	return 0;
}

void usu_aniadir(){
	ofstream archivo;
	string nA, texto;
	char c;
	
	na:
	cout<<"\t\tDiga la Direccion o Nombre del Archivo .txt al que desea aniadir texto:"<<endl;
	fflush(stdin);
	getline(cin,nA);
	
	archivo.open(nA.c_str(),ios::app);
	
	if(archivo.fail()){
		cout<<"\n\t\t\tARCHIVO NO ENCONTRADO"<<endl;
		goto na;
	}
	
	do{
		cout<<"\t\t\tIngrese el Texto:\n";
		fflush(stdin);
		getline(cin,texto);
		archivo<<texto<<endl;
		cout<<"Desea Ingresar mas Texto al Archivo <<S>>, Salir <<N>>: ";
		cin>>c;
	}while(c=='S' || c=='s');
	
	archivo.close();
}
