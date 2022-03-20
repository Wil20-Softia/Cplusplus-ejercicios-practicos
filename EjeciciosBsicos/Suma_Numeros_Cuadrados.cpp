#include <iostream>
#include <math.h>
using namespace std;
int main()
{	
	int contador=0, resultado=0, funcion, n;
	cout<<"            Suma de Numeros Elevados al Cuadrado"<<endl;
	cout<<"Ingrese el Numero Hasta Donde Desee que Llegue la Suma"<<endl; cin>>n;
	while(contador<n){	
		funcion= pow(contador+1,2);//esta funcion pertenece a la libreria <math.h>
		contador++;
		resultado+=funcion;
		cout << contador << "^2 =" << funcion << endl;
	}
	cout<< "Total= " << resultado <<endl;
	system("PAUSE");
}
