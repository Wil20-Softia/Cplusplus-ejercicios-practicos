#include <iostream>
#include <windows.h>
#include <ctime>
#include <sstream>
#include <cstring>

using namespace std;

void reloj(){
	
	while(1){
		time_t now = time(0);
		tm * time = localtime(&now); //Se crea un puntero que obtiene la hora local actual.
		int hour = time->tm_hour; //Da la hora en tipo entero.
		int min = time->tm_min;
		int sec = time->tm_sec;
		
		//Transforma los enteros a cadenas de caracteres.
		ostringstream h;
		ostringstream m;
		ostringstream s;
		
		//Asignamos los valores enteros a las variables string, y asi reconvertimos.
		h << hour;
		m << min;
		s << sec;
		
		//Formateamos la Hora.
		string horas;
		if(h.str().size() == 1){
			horas = "0" + h.str();
		}else{
			horas = h.str();
		}
		
		//Formateamos los Minutos.
		string minutos;
		if(m.str().size() == 1){
			minutos = "0" + m.str();
		}else{
			minutos = m.str();
		}
		
		//Formateamos los Segundos.
		string segundos;
		if(s.str().size() == 1){
			segundos = "0" + s.str();
		}else{
			segundos = s.str();
		}
		
		//Imprimimos el formato de reloj.
		cout<<horas<<":"<<minutos<<":"<<segundos;
		
		//Para actualizar el bucle cada segundo.
		Sleep(1000);
		
		//Limpiamos el contenido para que no imprima una encima de otra.
		system("cls");
	}
}

int main(int argc, char *argv[]){
	
	reloj();
	
	system("PAUSE");
	return 0;
}
