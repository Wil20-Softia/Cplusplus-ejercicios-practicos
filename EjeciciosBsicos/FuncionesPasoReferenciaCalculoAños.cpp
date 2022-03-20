#include <iostream>
#include <conio.h>

using namespace std;

void calc_anios(int,int&,int&,int&);

int main(){
	
	int td, a=0, m=0, d=0;
	
	cout<<"\t\tCalcula la Fecha actual, Dependiendo de los dia ingresados.\n"<<endl;
	
	cout<<"\tIngrese la cantidad de dias: ";
	cin>>td;
	
	calc_anios(td,a,m,d);
	
	cout<<"\n\t\tLa Fecha es igual a: "<<d+1<<"/"<<m+1<<"/"<<a+2000<<endl;
	
	getch();
	return 0;
}

void calc_anios(int totalDias, int& anios, int& mes, int& dia){
	anios = totalDias/365;
	totalDias %= 365;
	mes = totalDias/30;
	dia = totalDias % 30;
}
