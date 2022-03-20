#include <iostream>
#include <cstring>
#include "Persona.h"

using namespace std;


int main(){
	
	Persona people("Wilson Daniel", "Escalona Fernandez");
	cout<<"Nombre: "<<people.getNombre()<<endl;
	cout<<"Apellido: "<<people.getApellido()<<endl;
	people.capacidad_intelectual(146.89);
	cout<<"Piernas: "<<people.piernas()<<endl;
	cout<<"Brazos: "<<people.brazos()<<endl;
	cout<<"Cabeza: "<<people.cabeza()<<endl;
	Persona::ojos = "Verdes";
	cout<<"Color de Ojos: "<<Persona::ojos<<endl;
	cout<<"Indice de Capacidad Intelectual: "<<people.getCapacidadIntelectual()<<endl;
	
	system("PAUSE");
	return 0;
}
