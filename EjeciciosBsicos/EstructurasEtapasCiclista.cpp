/*
Defina una estructura que indique el tiempo empleado por un ciclista en
una etapa. La estructura debe tener tres campos: horas, minutos y segundos.
Escriba un programa que dado N etapas calcule el tiempo total empleado en
correr todas las etapas.
*/

#include <iostream>
#include <conio.h>

using namespace std;

struct Etapas{
	int horas;
	int minutos;
	int segundos;
}etp[100];

int main(){
	
	int num_etp, horasT=0, minutosT=0, segundosT=0;
	
	cout<<"Digite el Numero de Etapas: "; cin>>num_etp;
	
	system("cls");
	
	for(int i=0; i<num_etp; i++){
		cout<<"\t\tEtapa Nro "<<i+1<<".\n"<<endl;
		cout<<"\tHoras: "; cin>>etp[i].horas;
		cout<<"\tMinutos: "; cin>>etp[i].minutos;
		cout<<"\tSegundos: "; cin>>etp[i].segundos;
		
		horasT += etp[i].horas;
		minutosT += etp[i].minutos;
		if(minutosT >= 60){
			minutosT -= 60;
			horasT++;
		}
		segundosT += etp[i].segundos;
		if(segundosT >= 60){
			segundosT -= 60;
			minutosT++;
		}
		
		cout<<"\n\n";
	}
	
	cout<<"\t\tEl Tiempo Total empleado por el Ciclista en "<<num_etp<<" Etapas, es:"<<endl;
	cout<<"\tHoras: "<<horasT<<endl;
	cout<<"\tMinutos: "<<minutosT<<endl;
	cout<<"\tSegundos: "<<segundosT<<endl;
	
	getch();
	return 0;
}
