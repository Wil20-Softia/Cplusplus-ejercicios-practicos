/*
Escriba una funcion nombrada cambio() que tenga un parametro en numero entero
y seis parametros de referencia en numero entero nombrados cien, cincuenta, veinte,
diez, cinco y uno, respectivamente. La funcion tiene que considerar el valor entero
transmitido como una entidad en dolares y convertir el valor en el numero menor
de billetes equivalentes.
*/

#include <iostream>
#include <conio.h>

using namespace std;

void cambio(int,int&,int&,int&,int&,int&,int&);

int main(){
	
	int val,cien=0,cincuenta=0,veinte=0,diez=0,cinco=0,uno=0;
	
	cout<<"Ingrese la cantidad de dinero: ";
	cin>>val;
	
	cambio(val,cien,cincuenta,veinte,diez,cinco,uno);
	
	cout<<"\t\tEl Cambio es:\n"<<endl;
	cout<<"Cien: "<<cien<<endl;
	cout<<"Cincuenta: "<<cincuenta<<endl;
	cout<<"Veinte: "<<veinte<<endl;
	cout<<"Diez: "<<diez<<endl;
	cout<<"Cinco: "<<cinco<<endl;
	cout<<"Uno: "<<uno<<endl;
	
	getch();
	return 0;
}

void cambio(int v,int& ci,int& cin,int& vei,int& di,int& cinc,int& un){
	ci=v/100;
	v %= 100;
	cin=v/50;
	v %= 50;
	vei=v/20;
	v %= 20;
	di=v/10;
	v %= 10;
	cinc=v/5;
	v %= 5;
	un=v/1;
}
