#include <iostream>
#include <cstring>
using namespace std;

class Perro{
	private:
		string nombre, raza;
	public:
		Perro(string,string);//Constructor
		~Perro();//Destructor
		void mostrarDatos();
		void jugar();
};

Perro::Perro(string _nombre,string _raza){
	nombre=_nombre;
	raza=_raza;
}

Perro::~Perro(){//El destructor no se le coloca nada
}

void Perro::mostrarDatos(){
	cout<<" Nombre: "<<nombre<<endl;
	cout<<" Raza: "<<raza<<endl;
}

void Perro::jugar(){
	cout<<"El Perro "<<nombre<<" esta jugando"<<endl;
}

int main(){
	
	Perro p1("Wilbur","Mestizo");
	
	p1.mostrarDatos();
	p1.jugar();
	p1.~Perro();//el destructor elimina al objeto creado de la clase.
	
	cout<<"\n"<<endl;
	system("PAUSE");
	return 0;
}
