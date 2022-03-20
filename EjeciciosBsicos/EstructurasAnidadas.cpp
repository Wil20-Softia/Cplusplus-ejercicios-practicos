#include <iostream>
#include <conio.h>

using namespace std;

struct info_direccion{
	char direccion[30];
	char ciudad[20];
	char estado[20];
};

struct empleado{
	char nombre[30];
	struct info_direccion dir_empleado;
	double salario;
}empleados[2];//Arreglo de estructuras. Sepueden guardar mas de dos estructuras en un solo arreglo.

int main(){
	
	//Guardando los datos dentro de las estructuras.
	for(int i=0; i<2; i++){
		fflush(stdin); //Vaciar el buffer y permitir digitar nuevos valores.
		cout<<"Digite su Nombre: "; cin.getline(empleados[i].nombre,30,'\n');
		cout<<"\nDireccion\n"<<endl;
		cout<<"\tEstado: "; cin.getline(empleados[i].dir_empleado.estado,20,'\n');
		cout<<"\tCiudad: "; cin.getline(empleados[i].dir_empleado.ciudad,20,'\n');
		cout<<"\tDireccion Especifica: "; cin.getline(empleados[i].dir_empleado.direccion,30,'\n');
		cout<<"\nDigite su Salario: "; cin>>empleados[i].salario;
		system("cls");
	}
	
	//Imprimiendo datos ya guardados.
	for(int i=0; i<2; i++){
		cout<<"Informacion del Empleado "<<i+1<<"\n"<<endl;
		cout<<"Su Nombre es: "<<empleados[i].nombre<<endl;
		cout<<"Vive en.\n"<<endl;
		cout<<"\tEl Estado: "<<empleados[i].dir_empleado.estado<<endl;
		cout<<"\tEn la Ciudad de: "<<empleados[i].dir_empleado.ciudad<<endl;
		cout<<"\tEspecificamente en: "<<empleados[i].dir_empleado.direccion<<endl;
		cout<<"\nY su Salario es de: Bs.S "<<empleados[i].salario;
		cout<<"\n\n"<<endl;
	}
	
	getch();
	return 0;
}
