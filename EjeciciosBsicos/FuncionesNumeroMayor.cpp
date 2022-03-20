#include <iostream>
#include <conio.h>

using namespace std;

//Prototipo de la Funcion.
int ecuentraMax(int, int);

int main(){
	
	int n1, n2;
	
	cout<<"\t\tEncuentra el Mayor de 2 Numeros.\n"<<endl;
	
	cout<<"\tDigite 2 Numeros: ";
	cin>>n1>>n2;
	
	//Llamado a la funcion que retorna un numero entero.
	cout<<"\n\tEl numero mayor es: "<<ecuentraMax(n1,n2)<<endl;
	
	getch();
	return 0;
}

//Construccion de la Funcion
int ecuentraMax(int x, int y){
	int nM;
	
	if(x>y){
		nM=x;
	}else{
		nM=y;
	}
	
	return nM;
}
