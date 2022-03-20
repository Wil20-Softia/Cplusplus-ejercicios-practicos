#include <iostream>
#include <cstdlib>
using namespace std;

struct Persona{
	char nombre[20];
	int edad;
}persona1;

int main(){
	cout<<"Nombre: "; cin.getline(persona1.nombre,20,'\n');
	cout<<"Edad: "; cin>>persona1.edad;
	
	cout<<"\n\n\tImprimiendo Datos:\n"<<endl;
	cout<<"Nombre: "<<persona1.nombre<<endl;
	cout<<"Edad: "<<persona1.edad<<endl;
	
	cout<<"\n"<<endl;
	system("PAUSE");
	return 0;
}
