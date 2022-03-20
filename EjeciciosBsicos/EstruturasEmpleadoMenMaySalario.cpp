/*
Realizar un programa que lea un arreglo de estructuras los datos de N empleados de la empresa
y que imprima los datos del empleado con mayor y menor salario.
*/
#include <iostream>
#include <conio.h>

using namespace std;

struct Empleado{
	char nombre[20];
	float salario;		
}emp[100];

int main(){
	
	int n_empleados, posM=0, posm=0;
	float mayor=0, menor=99999999.9;
	
	cout<<"Digite el Numero de empleados: ";
	cin>>n_empleados;
	cout<<"\n\n";
	for(int i=0; i<n_empleados; i++){
		fflush(stdin);
		cout<<"\tEmpleado "<<i+1<<endl;
		cout<<"Digite el Nombre: "; cin.getline(emp[i].nombre,20,'\n');
		cout<<"Digite el Salario: "; cin>>emp[i].salario;
		cout<<"\n\n"<<endl;
		//Determina el salario mayor
		if(emp[i].salario > mayor){
			mayor=emp[i].salario;
			posM=i;
		}
		//Determina el salario menor
		if(emp[i].salario < menor){
			menor=emp[i].salario;
			posm=i;
		}
	}
	
	cout<<"\nEmpleado con Mayor salario."<<endl;
	cout<<"Nombre: "<<emp[posM].nombre<<endl;
	cout<<"Salario: "<<emp[posM].salario<<endl;
	
	cout<<"\nEmpleado con Menor salario."<<endl;
	cout<<"Nombre: "<<emp[posm].nombre<<endl;
	cout<<"Salario: "<<emp[posm].salario<<endl;
	getch();
	return 0;
}
