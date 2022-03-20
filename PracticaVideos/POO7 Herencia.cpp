#include <iostream>
#include <cstring>
using namespace std;

class Persona{//Clase Padre Persona
	private:
		string nombre;
		int edad;
	public:
		Persona(string,int);//Constructor de la Clase Padre Persona
		void mostrarPersona();
};

class Alumno : public Persona{//Clase hija Alumno hereda de todo lo publico de la Clase Persona
	private:
		string codigoAlumno;
		float notaFinal;
	public:
		//costructor de la clase hija tiene los parametros de la clase padre y los de ella.
		Alumno(string,int,string,float);
		void mostrarAlumno();
};

//costructor de la clase padre asignando valores
Persona::Persona(string _nombre, int _edad){
	nombre=_nombre;
	edad=_edad;
}

//costructor de la clase hija, la cual tiene los parametros de ella 
//y los parametros de la clase padre, y se manda a llamar los valores de los parametros
//de la clase padre para no sobreescribirlos.
Alumno::Alumno(string _nombre,int _edad, string _codigoAlumno, float _notaFinal) : Persona(_nombre,_edad){
	codigoAlumno=_codigoAlumno;
	notaFinal=_notaFinal;
}

void Persona::mostrarPersona(){
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Edad: "<<edad<<endl;
}

void Alumno::mostrarAlumno(){
	mostrarPersona();//se utiliza para mostrar los valores de la clase padre
	cout<<"Codigo del Alumno: "<<codigoAlumno<<endl;
	cout<<"Nota Final: "<<notaFinal<<endl;
}

int main(){
	
	Alumno alumno1("Wilson",19,"312",16.69);
	
	alumno1.mostrarAlumno();
	
	cout<<"\n"<<endl;
	system("PAUSE");
	return 0;
}
