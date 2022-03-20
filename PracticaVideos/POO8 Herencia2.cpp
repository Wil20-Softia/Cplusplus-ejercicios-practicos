#include <iostream>
#include <cstring>
using namespace std;

//clase Persona padre
class Persona{
	private://atributos
		string nombre;
		int edad;
		float altura;
		float peso;
		string direccion;
	public://metodos
		Persona();//Costructor
		//metodos setter
		void asignarNombre(string);
		void asignarEdad(int);
		void asignarAltura(float);
		void asignarPeso(float);
		void asignarDireccion(string);
		//metodos getter
		string darNombre();
		int darEdad();
		float darAltura();
		float darPeso();
		string darDireccion();
};

//Definicion de la Clase Persona
Persona::Persona(){//costructor
}

//metodos setter
void Persona::asignarNombre(string _nombre){
	nombre=_nombre;
}

void Persona::asignarEdad(int _edad){
	edad=_edad;
}

void Persona::asignarAltura(float _altura){
	altura=_altura;
}

void Persona::asignarPeso(float _peso){
	peso=_peso;
}

void Persona::asignarDireccion(string _direccion){
	direccion=_direccion;
}

//metodos getter
string Persona::darNombre(){
	return nombre;
}

int Persona::darEdad(){
	return edad;
}

float Persona::darAltura(){
	return altura;
}

float Persona::darPeso(){
	return peso;
}

string Persona::darDireccion(){
	return direccion;
}

//clase empleado hijo de clase persona
class Empleado : public Persona{
	private://atributos
		string areaTrabajo;
		string empresa;
		int id;
		string funciones;
	public://metodos
		Empleado();//constructor
		//metodo setter
		void asignarDatos(string,string,int,string);
		//metodos getter
		string darAreaTrabajo();
		string darEmpresa();
		int darId();
		string darFunciones();
};

Empleado::Empleado(){//constructor
}

//definicion de la clase empleado
//metodo setter
void Empleado::asignarDatos(string _areaTrabajo,string _empresa,int _id,string _funciones){
	areaTrabajo=_areaTrabajo;
	empresa=_empresa;
	id=_id;
	funciones=_funciones;
}

//metodos getter
string Empleado::darAreaTrabajo(){
	return areaTrabajo;
}

string Empleado::darEmpresa(){
	return empresa;
}

int Empleado::darId(){
	return id;
}

string Empleado::darFunciones(){
	return funciones;
}

//clase estudiante padre e hija de persona
class Estudiante: public Persona{
	private://atributos
		string codigo;
		float promedio;
		string seccion;
		int anio;
	public://metodos
		Estudiante();//constructor
		//metodo setter
		void asignarEstudiante(string,float,string,int);
		//metodo getter
		string darCodigo();
		float darPromedio();
		string darSeccion();
		int darAnio();
};


Estudiante::Estudiante(){//constructor
}

//definicion de la clase estudiante
//metodo setter
void Estudiante::asignarEstudiante(string _codigo, float _promedio, string _seccion, int _anio){
	codigo=_codigo;
	promedio=_promedio;
	seccion=_seccion;
	anio=_anio;
}

//metodos setter
string Estudiante::darCodigo(){
	return codigo;
}

float Estudiante::darPromedio(){
	return promedio;
}

string Estudiante::darSeccion(){
	return seccion;
}

int Estudiante::darAnio(){
	return anio;
}

//clase universitario hija de estudiante
class Universitario: public Estudiante{
	private://atributos
		string carrera;
	public://metodos
		Universitario();//constructor
		//metodo setter
		void asignarUniversitario(string);
		//metodo getter
		string darCarrera();
};

Universitario::Universitario(){//constructor
}

//definicion de la clase universitario
//metodo setter
void Universitario::asignarUniversitario(string _carrera){
	carrera=_carrera;
}

//metodo getter
string Universitario::darCarrera(){
	return carrera;
}

int main(){
	
	int i=0;
	Universitario e1;
	Empleado emple1;
	
	//asignando valores a empleado.
	emple1.asignarNombre("Ana");
	emple1.asignarEdad(20);
	emple1.asignarAltura(1.54);
	emple1.asignarPeso(46.7);
	emple1.asignarDireccion("Sabana de Mendoza, Valmore Rodriguez, Las Americas, Calle Bolivia");
	emple1.asignarDatos("RRHH","WyA C.A",i+=1,"Control de Pagos");
	
	//imprimiendo los Valores de Empleado.
	cout<<"\t\t\tEmpleado.\n"<<endl;
	cout<<"ID: "<<emple1.darId()<<endl;
	cout<<"Nombre: "<<emple1.darNombre()<<endl;
	cout<<"Edad: "<<emple1.darEdad()<<endl;
	cout<<"Altura: "<<emple1.darAltura()<<endl;
	cout<<"Peso: "<<emple1.darPeso()<<endl;
	cout<<"Direccion: "<<emple1.darDireccion()<<endl;
	cout<<"Empresa: "<<emple1.darEmpresa()<<endl;
	cout<<"Area de Trabajo: "<<emple1.darAreaTrabajo()<<endl;
	cout<<"Funcion que Cumple: "<<emple1.darFunciones()<<endl;
	cout<<"\n"<<endl;
	//asignando valores a universitario.
	e1.asignarNombre("Wilson");
	e1.asignarEdad(19);
	e1.asignarAltura(1.57);
	e1.asignarPeso(50.5);
	e1.asignarDireccion("Betijoque, Inavi, Luis Mario Madrid, Vereda #2, Casa #5");
	e1.asignarEstudiante("777",16.69,"D26",5);
	e1.asignarUniversitario("Ingenieria de Sistemas");
	
	//imprimiedo los valores de universitario
	cout<<"\t\t\tEstudiante Universitario.\n"<<endl;
	cout<<"Nombre: "<<e1.darNombre()<<endl;
	cout<<"Edad: "<<e1.darEdad()<<endl;
	cout<<"Altura: "<<e1.darAltura()<<endl;
	cout<<"Peso: "<<e1.darPeso()<<endl;
	cout<<"Direccion: "<<e1.darDireccion()<<endl;
	cout<<"Carrera: "<<e1.darCarrera()<<endl;
	cout<<"Codigo del Estudiante: "<<e1.darCodigo()<<endl;
	cout<<"Promedio: "<<e1.darPromedio()<<endl;
	cout<<"Seccion: "<<e1.darSeccion()<<endl;
	cout<<"Semestre: "<<e1.darAnio()<<endl;
		
	cout<<"\n"<<endl;
	system("PAUSE");
	return 0;
}

