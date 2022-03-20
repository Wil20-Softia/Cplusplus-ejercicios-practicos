#include <iostream>
#include <cstring>
using namespace std;

class Cuenta{
	private:
		int numero_cuenta;
		string tipo;
		float saldo;
		int clave;
	public:
		void guardar_cuenta(int);
		void guardar_tipo(string);
		void guardar_saldo(float);
		void guardar_clave(int);
		void depositar(float);
		void retirar(float);
		double mostrar_cuenta();
		string mostrar_tipo();
		float mostrar_saldo();
		int mostrar_clave();
		Cuenta();
		~Cuenta();
};
