#include <iostream>
#include <cstring>

using namespace std;

/*
Los Constructores son funciones miembros especiales que sirven para inicializar un objeto
de una determinada clase al mismo tiempo que se declaran.
-Tienen el mismo nombre a la clase a la que pertenecen.
-No tienen tipo de retorno, es decir, no regresan ningun tipo de valor.
-Deben ser Publicos.
*/

class Persona{
	protected:
		int _piernas;
		int _cabeza;
		int _brazos;
		float _capacidad_intelectual;
		string _nombres;
		string _apellidos;
	
	public:
		Persona(string n, string a);
		int piernas(){
			_piernas=2;
			return _piernas;
		}
		int brazos(){
			_brazos=2;
			return _brazos;
		}
		int cabeza();
		static string ojos;
		void capacidad_intelectual(float cap);
		float getCapacidadIntelectual();
		string getNombre();
		string getApellido();
};

Persona::Persona(string n, string a){
	_nombres = n;
	_apellidos = a;
}

string Persona::getNombre(){
	return _nombres;
}

string Persona::getApellido(){
	return _apellidos;
}

int Persona::cabeza(){
	_cabeza=1;
	return _cabeza;
}
string Persona::ojos = "Marrones";

void Persona::capacidad_intelectual(float cap){
	_capacidad_intelectual = cap;
}

float Persona::getCapacidadIntelectual(){
	return _capacidad_intelectual;
}
