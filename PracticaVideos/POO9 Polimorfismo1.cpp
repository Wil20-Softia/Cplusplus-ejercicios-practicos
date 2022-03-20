#include <iostream>
#include <cstring>
using namespace std;

class Persona{
	private:
		string nombre;
		int edad;
	public:
		Persona(string,int);
		virtual void mostrar();//Polimorfismo se coloca el virtual en la clase padre
};

class Alumno : public Persona{
	private:
		float notaFinal;
	public:
		Alumno(string,int,float);
		void mostrar();
};

class Profesor : public Persona{
	private:
		string materia;
	public:
		Profesor(string,int,string);
		void mostrar();
};

Persona::Persona(string _nombre,int _edad){
	nombre=_nombre;
	edad=_edad;
}

void Persona::mostrar(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Edad: "<<edad<<endl;
}

Alumno::Alumno(string _nombre,int _edad,float _notaFinal) : Persona(_nombre,_edad){
	notaFinal=_notaFinal;
}

void Alumno::mostrar(){
	Persona::mostrar();
	cout<<"Nota Final: "<<notaFinal<<endl;
}

Profesor::Profesor(string _nombre,int _edad,string _materia) : Persona(_nombre,_edad){
	materia=_materia;
}

void Profesor::mostrar(){
	Persona::mostrar();
	cout<<"Materia: "<<materia<<endl;
}

int main(){
	
	Persona *vector[3];
	
	vector[0]= new Alumno("Wilson",19,16.69);
	vector[1]= new Alumno("Ana",20,18.7);
	vector[2]= new Profesor("Anderson",32,"Lenguaje de Programacion II");
	
	vector[0]->mostrar();
	cout<<"\n"<<endl;
	vector[1]->mostrar();
	cout<<"\n"<<endl;
	vector[2]->mostrar();
	
	cout<<"\n"<<endl;
	system("PAUSE");
	return 0;
}
