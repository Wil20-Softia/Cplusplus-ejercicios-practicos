#include <iostream>
using namespace std;

int main(){ 
	long numero=0, acumulador=0;
	char operador;
	cout<<"                    CALCULADORA DE OPERACIONES BASICAS"<<endl<<"  "<<endl;
	do{
		cout<<"     Ingrese Operador(+-*/). Para Finaliar (=)"<<endl;
		cin>>operador;
		cout<<"  "<<endl<<"     Ingrese Numero. Para Finalizar (0)"<<endl;
		cin>>numero;
		if(operador=='+'){
			acumulador+=numero;
		}
		if(operador=='-'){
			acumulador-=numero;
		}
		if(operador=='*'){
			acumulador*=numero;
		}					
		if(operador=='/'){
			acumulador/=numero;
		}
	}while(operador=='+' || operador=='-' || operador=='*' || operador=='/');
	
	cout<<"  "<<endl<<"Total: "<<acumulador<<endl;
	system("PAUSE");
	return 0;
}
