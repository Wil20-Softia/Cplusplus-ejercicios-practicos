#include <iostream>
using namespace std;
int main(){	
	int numero, i=1;
	cout<<"       TABLA DE MULTIPLICAR"<<endl;
	cout<<"Ingrese el Numero del que Desea Saber la Tabla"<<endl;
	cin>>numero;
	do{
		cout<< numero << " x " << i << " = " << numero*i<<endl;
		i++; 
	}while(i<=12);
	system("PAUSE");
}
