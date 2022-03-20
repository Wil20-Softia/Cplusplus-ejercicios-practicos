#include <iostream>
#include <cstdlib>
using namespace std;

struct info_direccion{
	char direccion[100];
	char ciudad[100];
	char provincia[100];
};

struct empleado{
	char nombre[100];
	struct info_direccion dir_empleado;
	double salario;
}empleados[2];

int main(){
	
	for(int i=0; i<2; i++){
		fflush(stdin);//Vaciar el Buffer y permitir digitar los valores.
		cout<<"\n\t\t\tEMPLEADO "<<i+1<<".\n"<<endl;
		cout<<"Nombre: "; cin.getline(empleados[i].nombre,100,'\n');
		cout<<"Direccion: "; cin.getline(empleados[i].dir_empleado.direccion,100,'\n');
		cout<<"Ciudad: "; cin.getline(empleados[i].dir_empleado.ciudad,100,'\n');
		cout<<"Provincia: "; cin.getline(empleados[i].dir_empleado.provincia,100,'\n');
		cout<<"Sueldo: "; cin>>empleados[i].salario;
		cout<<"\n"<<endl;
	}
	
	for(int i=0; i<2; i++){
		cout<<"\n\t\t\tEMPLEADO "<<i+1<<".\n"<<endl;
		cout<<"Nombre: "<<empleados[i].nombre<<endl;
		cout<<"Direccion: "<<empleados[i].dir_empleado.direccion<<endl;
		cout<<"Ciudad: "<<empleados[i].dir_empleado.ciudad<<endl;
		cout<<"Provincia: "<<empleados[i].dir_empleado.provincia<<endl;
		cout<<"Sueldo: "<<empleados[i].salario<<endl;
		cout<<"\n"<<endl;
	}
	
	cout<<"\n"<<endl;
	system("PAUSE");
	return 0;
}

