#include <iostream>
#include <cstring>
using namespace std;

class Cliente{
	private:
		string nombre;
		string direccion;
		string cedula;
		string correo;
		double telefono;
	public:
		void ingresar_nombre(string);
		void ingresar_direccion(string);
		void ingresar_cedula(string);
		void ingresar_correo(string);
		void ingresar_telefono(double);
		string mostrar_nombre();
		string mostrar_direccion();
		string mostrar_cedula();
		string mostrar_correo();
		double mostrar_telefono();
		Cliente();
		~Cliente();
};
