#include <iostream>
#include <cstring>
using namespace std;

int main(){
	
	struct productos{
		float precio;
		string nombre;
		string codigo;
	};
	
	productos *pro= new productos[4];
	float aux;
	string aux1,aux2;
	cout<<"\t\t\tIngreso de Productos."<<endl;
	for(int i=0; i<4; i++){
		cout<<"\n\t\tProducto "<<i+1<<": "<<endl;
		cout<<"Nombre: "; fflush(stdin); getline(cin,pro[i].nombre);
		cout<<"Precio: "; cin>>pro[i].precio;
		cout<<"Codigo: "; fflush(stdin); getline(cin,pro[i].codigo);
		cout<<"\n"<<endl;
	}
	
	for(int i=0; i<4; i++){
		cout<<"\t\t\tPRODUCTO "<<i+1<<"."<<endl;
		cout<<"Precio: "<<pro[i].precio<<endl;
		cout<<"Nombre: "<<pro[i].nombre<<endl;
		cout<<"Codigo: "<<pro[i].codigo<<endl;
	}
	
	cout<<"\nProductos Ordenados  Segun su Precio: "<<endl;
	
	for(int i=0; i<4; i++){
		for(int j=0; j<4; j++){
			if(pro[j].precio>pro[j+1].precio){
				aux=pro[j+1].precio;
				pro[j+1].precio=pro[j].precio;
				pro[j].precio=aux;
				
				aux1=pro[j+1].nombre;
				pro[j+1].nombre=pro[j].nombre;
				pro[j].nombre=aux1;
				
				aux2=pro[j+1].codigo;
				pro[j+1].codigo=pro[j].codigo;
				pro[j].codigo=aux2;
			}
		}
	}
	
	for(int i=0; i<4; i++){
		cout<<"\t\t\tPRODUCTO "<<i+1<<"."<<endl;
		cout<<"Precio: "<<pro[i].precio<<endl;
		cout<<"Nombre: "<<pro[i].nombre<<endl;
		cout<<"Codigo: "<<pro[i].codigo<<endl;
	}
	
	cout<<"\n"<<endl;
	system("PAUSE");
	return 0;
}
