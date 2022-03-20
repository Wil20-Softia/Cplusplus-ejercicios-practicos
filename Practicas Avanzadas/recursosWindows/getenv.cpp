#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main (){   
	string rut_wind = getenv("WINDIR");
	string rut_usua = getenv("USERPROFILE");
	string nom_pc = getenv("USERNAME");
	
	rut_usua = rut_usua + "\\Desktop";
	
   	cout<<"RUTA DE WINDOWS: "<<rut_wind<<endl;
   	cout<<"RUTA DE USUARIO: "<<rut_usua<<endl;
   	cout<<"NOMBRE DEL SISTEMA: "<<nom_pc<<endl;
	system("PAUSE");
   	return 0;
}
