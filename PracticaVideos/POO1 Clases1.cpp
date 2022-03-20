#include <iostream>
#include <cstring>
using namespace std;

class Persona{
	private://atributos encapsulados
		int edad;
		string nombre;
	public://metodos los cuales utilizaran los atributos privados.
		Persona(int,string);//constructor
		void leer();
		void correr();
};

//costructor nos sirve para inicializar los atributos.
Persona::Persona(int _edad,string _nombre){
	edad=_edad;
	nombre=_nombre;
}

void Persona::leer(){
	cout<<"Soy "<<nombre<<" y estoy leyendo un libro"<<endl;
}

void Persona::correr(){
	cout<<"Soy "<<nombre<<" y estoy corriendo una maraton y tengo "<<edad<<" anyos."<<endl;
}

int main(){
	
	//creando objeto de la clase persona e inicializandolo.Forma 1
	Persona p1= Persona(19,"Wilson");
	//creando objeto de la clase persona e inicializandolo.Forma 2
	Persona p2(20,"Ana");
	Persona p3(33,"Wilmer");
	
	p2.correr();
	p1.leer();
	p3.correr();
	p3.leer();
	
	cout<<"\n"<<endl;
	system("PAUSE");
	return 0;
}



