#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
	
	long cuenta=500000;
	int opcion;
	float dinero;
	
	cout<<"\t\tCAJERO VIRTUAL:\n"<<endl;
	cout<<"1.Depositar.\n";
	cout<<"2.Retirar.\n";
	cout<<"3.Salir.\n"<<endl;
	cout<<"Digite la Opcion de su Preferencia: "; 
	cin>>opcion;
	
	do{
		
		
		switch(opcion){
			case 1:
				cout<<"Ingrese la Cantidad a Depositar: ";
				cin>>dinero;
				cuenta+=dinero;
				cout<<"La Transaccion a sido realizada con exito.\n";
				cout<<"Ud. Tiene en su cuenta: "<<cuenta<<"BsF\n"<<endl;
				break;
			case 2:
				cout<<"Ingrese la Cantidad a Retirar: ";
				cin>>dinero;
				while(dinero>cuenta){
					cout<<"Ingrese una cantidad menor que: "<<cuenta<<"BsF: ";
					cin>>dinero;
				}
				cuenta-=dinero;
				cout<<"La Transaccion a sido realizada con exito.\n";
				cout<<"Ud. Tiene en su cuenta: "<<cuenta<<"BsF\n"<<endl;
				break;
		}
		
		cout<<"Digite la Opcion de su Preferencia: "; 
		cin>>opcion;
		
	}while(opcion<3);
	
	system("PAUSE");
	return 0;
}
