/*
Hacer una estructura llamada corredor, en la cual se tendran los siguientes campos:
Nombre, Edad, Sexo y Club. Pedir los datos al usuario para un corredor, y asignarle una categoria
de competicion:
- Juvenil <= 18 años
- Señor <= 40 años
- Veterano > 40 años
Posteriormente imprimir todos los datos del corredor, incluida su categoria de competicion. 
*/

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

struct corredor{
	char nombre[20];
	int edad;
	char sexo[10];
	char club[20];
}c1;

int main(){
	
	char categoria[20];
	
	cout<<"******Ingrese los Datos del Corredor******\n\n"<<endl;
	cout<<"Nombre: "; cin.getline(c1.nombre,20,'\n');
	cout<<"Edad: "; cin>>c1.edad;
	fflush(stdin);
	cout<<"Sexo: "; cin.getline(c1.sexo,10,'\n');
	cout<<"Club: "; cin.getline(c1.club,20,'\n');
	
	if(c1.edad <= 18){
		strcpy(categoria,"Juvenil");
	}else if(c1.edad <= 40){
		strcpy(categoria,"Senior");
	}else{
		strcpy(categoria,"Veterano");
	}
	
	cout<<"\n\n\t\tDatos del Corredor Registrado.\n"<<endl;
	cout<<"\t\t\tNombre: "<<c1.nombre<<endl;
	cout<<"\t\t\tEdad: "<<c1.edad<<endl;
	cout<<"\t\t\tSexo: "<<c1.sexo<<endl;
	cout<<"\t\t\tClub al que Pertenece: "<<c1.club<<endl;
	cout<<"\t\t\tCategoria Asignada a: "<<categoria<<endl;
	
	getch();
	return 0;
}
