#include <iostream>
#include <cstdlib>
#include <cstring>
#include <fstream>
using namespace std;

void frases();

int main(){
	frases();
	system("PAUSE");
	return 0;
}

void frases(){
	ofstream archivo;
	string nA, f;
	char c;
	int i=1;
	
	cout<<"Digite el Nombre del Archivo con la Terminacion .txt: ";
	fflush(stdin);
	getline(cin,nA);
	
	archivo.open(nA.c_str(), ios::out);
	
	if(archivo.fail()){
		cout<<"Error\n\t\t\tHASTA LUEGO"<<endl;
		exit(1);
	}
	
	do{
		cout<<"\n\t\t\tTexto #"<<i<<endl;
		cout<<"\n\t\t\tDigitelo:"<<endl;
		fflush(stdin);
		getline(cin,f);
		archivo<<f;
		cout<<"\nDesea Guardar Otra Frase <<S>>, Salir <<N>>: "; cin>>c;
		i++;
	}while(c=='S' || c=='s');
	
	archivo.close();
}
