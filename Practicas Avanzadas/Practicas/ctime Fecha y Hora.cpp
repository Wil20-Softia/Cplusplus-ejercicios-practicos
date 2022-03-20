#include <iostream>
#include <ctime>
#include <vector>

using namespace std;

int main(){
	
	/*
	struct tm{
		int tm_sec;		//segundos de minutos desde 0 a 61
		int tm_min;		//minutos de horas desde 0 a 59
		int tm_hour;	//horas de dias desde 0 a 24
		int tm_mday;	//dia de meses desde 1 a 31
		int tm_mon;		//meses de años desde 0 a 11
		int tm_year;	//año desde 1900
		int tm_wday;	//dias desde el domingo
		int tm_yday;	//dias desde el 1ero de Enero
		int tm_isdst;	//hours of daylight saving time.
	*/
	
	/*Fecha y Hora actual basado en el sistema actual.*/
	
	time_t now = time(0);
	
	/*Objeto de una estructura tm con fecha/hora local*/
	
	tm *time = localtime(&now);
	
	vector<string> dia_semana;
	dia_semana.push_back("Domingo");
	dia_semana.push_back("Lunes");
	dia_semana.push_back("Martes");
	dia_semana.push_back("Miercoles");
	dia_semana.push_back("Jueves");
	dia_semana.push_back("Viernes");
	dia_semana.push_back("Sabado");
	
	
	vector<string> mes;
	mes.push_back("Enero");
	mes.push_back("Febrero");
	mes.push_back("Marzo");
	mes.push_back("Abril");
	mes.push_back("Mayo");
	mes.push_back("Junio");
	mes.push_back("Julio");
	mes.push_back("Agosto");
	mes.push_back("Septiembre");
	mes.push_back("Octubre");
	mes.push_back("Noviembre");
	mes.push_back("Diciembre");
	
	int year = 1900 + time->tm_year;
	
	//Formato deseado: Hoy Lunes, 24 de Septiembre del 2018
	
	cout<<"\n\n\t\tHoy "<<dia_semana[time->tm_wday]<<", "<<time->tm_mday<<" de "<<mes[time->tm_mon]<<" del "<<year<<endl;
	cout<<"\t\tHora exacta: ";
	cout<<time->tm_hour<<":"<<time->tm_min<<":"<<time->tm_sec<<"\n\n"<<endl;
	system("PAUSE");
	return 0;
}
