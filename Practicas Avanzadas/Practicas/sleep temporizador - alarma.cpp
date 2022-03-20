#include <iostream>
#include <windows.h>
#include <sstream>
#include <cstring>

using namespace std;

void alarma(int minutos){
	
	long segundos = minutos * 60;
	int temporizador = 1;
	
	while(1){
		cout<<"\n\n\n\t\t\t\t\t"<<temporizador<<endl;
		if(temporizador == segundos){
			cout<<"\n\n\n\n\t\t\t\t\t****** ALARMA ******"<<endl;
		}
		if(temporizador > segundos){
			cout<<"\n\n\n\n\t\t\t\t\t****** ALARMA ******"<<endl;
			cout<<"\a"<<endl; //Sonido BEEP del sistema operativo.
		}
		if(temporizador == segundos + 5){
			break;
		}
		Sleep(1000); //1 segundo
		temporizador++;
		system("cls");
	}
	
}

int main(){

	cout<<"Digite el Numero de Minutos de la Alarma: ";
	string m;
	getline(cin,m);
	int minutos;
	if(istringstream(m) >> minutos){
		alarma(minutos);
	}
	
	system("PAUSE");
	return 0;
}
