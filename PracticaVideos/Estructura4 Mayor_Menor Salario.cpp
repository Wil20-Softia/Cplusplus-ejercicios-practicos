#include <iostream>
#include <cstdlib>
using namespace std;

struct Empleado{
	char Nombre[50];
	float Salario;
}em[100];

int main(){
	int n_em,posM=0,posm=0;
	float mayor=0, menor=99999999999;
	
	cout<<"Ingrese el numero de empleados: "; cin>>n_em;
	
	for(int i=0; i<n_em; i++){
		fflush(stdin);
		cout<<"\n\t\tEmpleado #"<<i+1<<":\n"<<endl;
		cout<<"Nombre: "; cin.getline(em[i].Nombre,50,'\n');
		cout<<"Salario: "; cin>>em[i].Salario;
		
		if(em[i].Salario>mayor){
			mayor=em[i].Salario;
			posM=i;
		}
		if(em[i].Salario<menor){
			menor=em[i].Salario;
			posm=i;
		}
		cout<<"\n"<<endl;
	}
	
	cout<<"El Empleado con Mayor Salario es:\n"<<endl;
	cout<<"\tNombre: "<<em[posM].Nombre<<endl;
	cout<<"\tSalario: "<<em[posM].Salario<<endl;
	cout<<"\n"<<endl;
	
	cout<<"El Empleado con Menor Salario es:\n"<<endl;
	cout<<"\tNombre: "<<em[posm].Nombre<<endl;
	cout<<"\tSalario: "<<em[posm].Salario<<endl;
	
	cout<<"\n"<<endl;
	system("PAUSE");
	return 0;
}
