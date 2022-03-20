#include <iostream>
using namespace std;

class Fecha{
	private://atributos
		int dia,mes,anio;
	public://metodos
		Fecha(int,int,int);//Constructor 1
		Fecha(long);//Constructor 2
		void mostrarFecha();
};

//costructor 1
Fecha::Fecha(int _dia,int _mes, int _anio){
	dia=_dia;
	mes=_mes;
	anio=_anio;
}

//costructor 2
Fecha::Fecha(long fecha){
	anio=int(fecha/10000);//Extraer el año
	mes=int((fecha-anio*10000)/100);//Extraer el mes
	dia=int(fecha-anio*10000-mes*100);//Extraer el dia
}

void Fecha::mostrarFecha(){
	cout<<"La Fecha es: "<<dia<<"/"<<mes<<"/"<<anio<<endl;
}

int main(){
	
	Fecha hoy(26,02,2017);
	Fecha ayer(20170225);
	
	hoy.mostrarFecha();
	ayer.mostrarFecha();
	
	cout<<"\n"<<endl;
	system("PAUSE");
	return 0;
}

