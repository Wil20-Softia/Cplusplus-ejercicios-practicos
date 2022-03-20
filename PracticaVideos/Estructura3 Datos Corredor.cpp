#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

struct corredo{
	char nombre[100];
	int edad;
	char sexo[100];
	char club[100];
}c1;

int main(){
	
	char categoria[100];
	cout<<"\t\t\tDATOS DE CORREDOR.\n"<<endl;
	cout<<"Nombre: "; cin.getline(c1.nombre,100,'\n');
	cout<<"Edad: "; cin>>c1.edad;
	fflush(stdin);
	cout<<"Sexo: "; cin.getline(c1.sexo,100,'\n');
	cout<<"Club: "; cin.getline(c1.club,100,'\n');
	
	if(c1.edad<=18){
		strcpy(categoria,"Juvenil");
	}else if(c1.edad<=40){
		strcpy(categoria,"Senior");
	}else{
		strcpy(categoria,"Veterano");
	}
	
	cout<<"\n\t\t\tDATOS CON CATEGORIA.\n"<<endl;
	cout<<"Nombre: "<<c1.nombre<<endl;
	cout<<"Edad: "<<c1.edad<<endl;
	cout<<"Sexo: "<<c1.sexo<<endl;
	cout<<"Club: "<<c1.club<<endl;
	cout<<"Categoria: "<<categoria;
}
