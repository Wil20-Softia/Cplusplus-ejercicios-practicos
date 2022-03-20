/*Realizar un programa que me ejecute la funciones de la libreria 
string. Seleccionandolas por medio de un menu...Wilson Escalona*/

#include <iostream>
#include <cstring>
using namespace std;

void MenuString();
	
int main(){
	
	MenuString();
	
	cout<<"\n\n"<<endl;
	system("PAUSE");
	return 0;
}

void MenuString(){
	
	int l,opcion;
	char cadena1[100];
	char cadena2[100];
	
	cout<<"\t\tMENU DE CADENA DE CARACTERES:\n"<<endl;
	cout<<"1.Desea Pasar una Cadena a Minusculas.\n";
	cout<<"2.Desea Pasar una Cadena a Mayusculas.\n";
	cout<<"3.Desea Saber cual es la Longitud de la Cadena.\n";
	cout<<"4.Desea Copiar una Cadena en Otra Vacia.\n";
	cout<<"5.Desea Saber si Dos Cadenas son Iguales.\n";
	cout<<"6.Desea Saber si una Cadena es Mayor que otra Alfabeticamente.\n";
	cout<<"7.Desea Concatenar una Cadena con Otra.\n";
	cout<<"8.Desea Invertir la cadena Totalmente.\n"<<endl;
	
	cout<<"Ingrese la Opcion de su Preferencia: ";cin>>opcion;
	cout<<"\n\n"<<endl;
	
	switch(opcion){
		case 1:
			cout<<"Ingrese la Cadena para Tranformarla a Minusculas:"<<endl;
			cin>>cadena1;
			strlwr(cadena1);
			cout<<"La cadena en minusculas:\n"<<cadena1<<endl;
			break;
		case 2:
			cout<<"Ingrese la Cadena para Tranformarla a Mayusculas:"<<endl;
			cin>>cadena1;
			strupr(cadena1);
			cout<<"La cadena en Mayusculas:\n"<<cadena1<<endl;
			break;
		case 3:
			cout<<"Ingrese la cadena para saber cual es su longitud:"<<endl;
			cin>>cadena1;
			l=strlen(cadena1);
			cout<<"La longitud de la cadena es: "<<l<<"\n"<<endl;
			break;
		case 4:
			cout<<"Ingrese la cadena para copiarla de nuevo: "<<endl;
			cin>>cadena1;
			strcpy(cadena2,cadena1);
			cout<<"La copia de la cadena es:\n"<<cadena2<<endl;
			break;
		case 5:
			cout<<"Ingrese la primera cadena:"<<endl;
			cin>>cadena1;
			cout<<"Ingrese la segunda cadena:"<<endl;
			cin>>cadena2;
			if(strcmp(cadena1,cadena2)==0){
				cout<<"Ambas cadenas son iguales"<<endl;
			}else{
				cout<<"Ambas cadenas son diferentes"<<endl;
			}
			break;
		case 6:
			cout<<"Ingrese la Primera Cadena:"<<endl;
			cin>>cadena1;
			cout<<"Ingrese la Segunda Cadena:"<<endl;
			cin>>cadena2;
			if(strcmp(cadena1,cadena2)>0){
				cout<<"La Primera cadena es mayor alfabeticamente que la Segunda"<<endl;
			}else{
				cout<<"La Segunda cadena es mayor alfabeticamente que la Primera"<<endl;
			}
			break;
		case 7:
			cout<<"Ingrese la Cadena 1:"<<endl;
			cin>>cadena1;
			cout<<"Ingrese la Cadaena 2:"<<endl;
			cin>>cadena2;
			strcat(cadena1,cadena2);
			cout<<"La cadena resultante es:\n"<<cadena1<<endl;
			break;
		case 8:
			cout<<"Ingrese la cadena que desea invertir:"<<endl;
			cin>>cadena1;
			strrev(cadena1);
			cout<<"La cadena invertida es:\n"<<cadena1<<endl;
			break;
		default:
			cout<<"Opcion Incorrecta"<<endl;		
	}
	
}
