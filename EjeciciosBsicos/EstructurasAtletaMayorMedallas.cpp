/*
Hacer un arreglo de estructura llamdo atleta para N atletas que contengan los siguientes campos:
nombre, pais, numero de medallas. y devuelva los datos (nombre, pais) del atleta que ha ganado
el mayor numero de medallas.
*/

#include <iostream>
#include <conio.h>

using namespace std;

struct Atleta{
	char nombre[20];
	char pais[20];
	int medallas;
}atl[100];

int main(){
	
	int num_atl, mayM=0, posA=0;
	
	cout<<"Digite el numero de Atletas: ";
	cin>>num_atl;
	cout<<"\n\n";
	
	for(int i=0; i<num_atl; i++){
		fflush(stdin);
		
		cout<<"Atleta Nro "<<i+1<<".\n";
		
		cout<<"Nombre: "; cin.getline(atl[i].nombre,20,'\n');
		cout<<"Pais: "; cin.getline(atl[i].pais,20,'\n');
		cout<<"Numero de Medallas obtenidas: "; cin>>atl[i].medallas;
		
		cout<<"\n\n";
		
		if(atl[i].medallas > mayM){
			mayM = atl[i].medallas;
			posA = i;
		}
	}
	
	cout<<"\tEl Atleta que ha ganado mayor numero de Medallas es: "<<endl;
	cout<<"\tNombre: "<<atl[posA].nombre<<". Y es del Pais "<<atl[posA].pais<<endl;
	
	getch();
	return 0;
}
