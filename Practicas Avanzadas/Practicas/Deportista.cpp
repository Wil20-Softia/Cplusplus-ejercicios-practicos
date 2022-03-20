#include <iostream>
#include <cstring>
#include "Deportista.h"

using namespace std;

int main(){
	
	
	Deportista rm("Cristiano","Ronaldo","Football");
	
	cout<<"\t\tDEPORTISTA:"<<endl;
	cout<<rm.getNombre()<<" "<<rm.getApellido()<<endl;
	cout<<"Deporte que practica: "<<rm.getDeporte()<<endl;
	rm.ojos = "Azules";
	cout<<"Color de Ojos: "<<rm.ojos<<endl;
	cout<<"Cambiando nombre..."<<endl;
	cout<<"Ahora es: "<<rm.cambiar_nombre(rm,"Wilson")<<endl;
	cout<<"Nuevo Nombre es: "<<rm.getNombre()<<" "<<rm.getApellido()<<endl;
	
	//Clonando a el Objeto rm.
	/*
	El puntero * nos permite apuntar a un objeto, reservando un espacio en la memoria
	para el tipo de objeto seleccionado.
	*/
	
	Deportista *bc;
	bc = &rm;
	cout<< bc->getNombre()<<endl;
	
	system("PAUSE");
	return 0;
}
