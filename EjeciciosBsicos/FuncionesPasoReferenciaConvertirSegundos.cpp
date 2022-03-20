/*
Escriba una funcion nombrada tiempo() que tenga un parametro en numero entero llamado totalSeg
y tres parametros de referencia enteros nombrados horas, min y seg. La funcion es convertir el
numero de segundos transmitido en un numero equivalente de horas, minutos y segundos.
*/

#include <iostream>
#include <conio.h>

using namespace std;

void tiempo(int,int&,int&,int&);

int main(){
	
	int cantSeg, h, m, s;
	
	cout<<"Ingrese la cantidad de segundos a transformar: ";
	cin>>cantSeg;
	
	tiempo(cantSeg,h,m,s);
	
	cout<<"\n\t\tEl Resultado es:"<<endl;
	cout<<"\tHoras: "<<h<<endl;
	cout<<"\tMinutos: "<<m<<endl;
	cout<<"\tSegundos: "<<s<<endl;
	
	getch();
	return 0;
}

void tiempo(int totalSeg, int& horas, int& minutos, int& segundos){
	horas = totalSeg/3600;
	totalSeg %= 3600;
	minutos = totalSeg/60;
	segundos = totalSeg%60;
}
