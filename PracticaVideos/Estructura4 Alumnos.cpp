#include <iostream>
#include <cstdlib>
using namespace std;

struct alumno{
	char nombre[100];
	int edad;
	double promedio;
	
}a[3];

int main(){
	
	double may=0;
	int j=0;
	
	cout<<"\t\t\tDATOS DE 3 ALUMNOS.\n"<<endl;
	for(int i=0; i<3; i++){
		fflush(stdin);
		cout<<"\t\tDatos de Alumno "<<i+1<<".\n"<<endl;
		cout<<"Nombre: "; cin.getline(a[i].nombre,100,'\n');
		cout<<"Edad: "; cin>>a[i].edad;
		cout<<"Promedio: "; cin>>a[i].promedio;
		cout<<"\n"<<endl;
	}
	
	for(int i=0; i<3; i++){
		if(a[i].promedio>may){
			may=a[i].promedio;
			j=i;
		}
	}
	
	cout<<"\n\t\tEl Alumno con Mejor Promedio es.\n"<<endl;
	cout<<"Nombre: "<<a[j].nombre<<endl;
	cout<<"Edad: "<<a[j].edad<<endl;
	cout<<"Promedio: "<<a[j].promedio<<endl;
	
	cout<<"\n"<<endl;
	system("PAUSE");
	return 0;
}
