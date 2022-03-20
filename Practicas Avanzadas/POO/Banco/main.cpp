#include <iostream>
#include <cstring>
#include "Cliente.h"
#include "Cuenta.h"
using namespace std;

int main(){
	
	int opc,clave,can_cli=0,pass,nueva_clave;
	string nombre,correo,direcc,cedula,tipo;
	float saldo,can;
	double numero, telefono;
	char res;
	Cuenta *cuentas= new Cuenta[100];
	Cliente *clientes= new Cliente[100];
	reg:
	do{
		cout<<"\t\tIngrese Datos del Cliente "<<can_cli+1<<".\n"<<endl;
		fflush(stdin);
		cout<<"Nombre y Apellido: "; getline(cin,nombre);
		fflush(stdin);
		cout<<"Cedula: "; cin>>cedula;
		fflush(stdin);
		cout<<"Direccion: "; getline(cin,direcc);
		fflush(stdin);
		cout<<"Nro Telefonico: "; cin>>telefono;
		fflush(stdin);
		cout<<"Correo: "; cin>>correo;
		clientes[can_cli].ingresar_nombre(nombre);
		clientes[can_cli].ingresar_cedula(cedula);
		clientes[can_cli].ingresar_direccion(direcc);
		clientes[can_cli].ingresar_telefono(telefono);
		clientes[can_cli].ingresar_correo(correo);
		fflush(stdin);
		cout<<"Tipo de Cuenta: "; getline(cin,tipo);
		cuentas[can_cli].guardar_cuenta(can_cli+1);
		fflush(stdin);
		cout<<"Saldo: "; cin>>saldo;
		fflush(stdin);
		cout<<"Clave: "; cin>>clave;
		cuentas[can_cli].guardar_clave(clave);
		cuentas[can_cli].guardar_saldo(saldo);
		cuentas[can_cli].guardar_tipo(tipo);
		fflush(stdin);
		cout<<"Desea Ingresar Otro Cliente?: (S/N) "; 
		cin>>res;      
		can_cli++;
	}while(res=='s' || res=='S');
	fin:
	cout<<"\t\t\tMENU PRINCIPAL\n"<<endl;
	cout<<"Opc 1 Registrar Clientes"<<endl;
	cout<<"Opc 2 Ir al Cajero"<<endl;
	cin>>opc;
	if(opc==1){
		goto reg;
	}else if(opc==2){
		fflush(stdin);
		cout<<"Ingrese su Numero de Cuenta: "; cin>>numero;
		fflush(stdin);
		cout<<"Ingrese su Clave: "; cin>>pass;
		for(int i=0;i<can_cli;i++){
			if(numero==cuentas[i].mostrar_cuenta() && pass==cuentas[i].mostrar_clave()){
				caj:
				int opc_caj;
				cout<<"\n\t\t\tOpciones del Cajero:"<<endl;
				cout<<"1 --> Retiro"<<endl;
				cout<<"2 --> Deposito"<<endl;
				cout<<"3 --> Cambio Clave"<<endl;
				cout<<"4 --> Consultar Saldo"<<endl;
				cout<<"5 --> Salir"<<endl;
				fflush(stdin);
				cin>>opc_caj;
				if(opc_caj==1){
					cout<<"Ingrese la Cantidad a Retirar: ";
					cin>>can;
					cuentas[i].retirar(can);
				}else if(opc_caj==2){
					cout<<"Ingrese la Cantidad a Depositar: ";
					cin>>can;
					cuentas[i].depositar(can);
				}else if(opc_caj==3){
					cout<<"Ingrese Nueva Clave: ";
					fflush(stdin);
					cin>>nueva_clave;
					cuentas[i].guardar_clave(nueva_clave);
				}else if(opc_caj==4){
					cout<<"Su Saldo Actual es: ";
					cuentas[i].mostrar_saldo();
					cout<<"\n"<<endl;
				}else if(opc_caj==5){
					goto fin;
				}else{
					cout<<"\txxxxxxOPCION INVALIDAxxxxxx\n"<<endl;
					goto caj;
				}
				goto caj;
			}
		}
	}
	cout<<"\n"<<endl;
	system("PAUSE");
	return 0;
}
