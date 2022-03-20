#include <cstring>
#include <iostream>
using namespace std;

class Persona{
	private:
    	string nombre;
    	string cedula;
    	int edad;
    	string direccion;
    public:
    	void asignar_nombre(string);
    	string mostrar_nombre();
    	void asignar_cedula(string);
    	string mostrar_cedula();
    	void a_edad(int);
    	int m_edad();
    	void a_direc(string);
    	string m_direc();
    	
    	Persona();
    	~Persona();
};
