#include <iostream>
#include <cstring>
#include "Persona.h"

using namespace std;

/*
Una de las principales propiedades de las clases es la herencia. Esta propiedad nos
permite crear nuevas clases a partir de clases existentes, concervando las propiedades
de la clase original.
*/

/*
this es un puntero que nos permite hacer referencia al propio objeto, es decir que apunta asi mismo
permitiendole acceder a los miembros de las clases.
*/

class Deportista : public Persona{
	protected:
		string _deporte;
	public:
		Deportista(string n, string a, string d):Persona(n,a){
			this->_deporte = d;
		};
		
		string getDeporte(){
			return this->_deporte;
		}
		
		string cambiar_nombre(Deportista &d, string n){
			if(&d == this){
				return _nombres = n;
			}else{
				"El Objeto seleccionado no soy yo";
			}
		}
		
};
