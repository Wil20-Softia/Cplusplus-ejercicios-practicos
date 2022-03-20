#include <iostream>
#include <cstring>
#include <sstream>

using namespace std;

void init(){
	cout<<"Seleccione una operacion aritmetica :: + - * / :: ";
	string operacion;
	getline(cin,operacion);
	if(operacion == "+" || operacion == "-" || operacion == "*" || operacion == "/"){
		
		cout<<"Ingrese Numero 1: ";
		string num1;
		getline(cin,num1);
		cout<<"Ingrese Numero 2: ";
		string num2;
		getline(cin,num2);
		
		float numero1, numero2;
		
		if(istringstream(num1) >> numero1 && istringstream(num2) >> numero2){
			if(operacion == "+"){
				cout<<"Total = "<<numero1 + numero2<<endl;
			}else if(operacion == "-"){
				cout<<"Total = "<<numero1 - numero2<<endl;
			}else if(operacion == "*"){
				cout<<"Total = "<<numero1 * numero2<<endl;
			}else if(operacion == "/"){
				cout<<"Total = "<<numero1 / numero2<<endl;
			}
			
			cout<<"Quieres Continuar? Si o No: ";
			string opc;
			getline(cin,opc);
			if(opc == "si" || opc == "Si" || opc == "SI" || opc=="sI"){
				init();
			}
		}
	}else{
		init();
	}
}

int main(int argc, char *argv[]){
	
	init();
	
	system("PAUSE");
	return 0;
}
