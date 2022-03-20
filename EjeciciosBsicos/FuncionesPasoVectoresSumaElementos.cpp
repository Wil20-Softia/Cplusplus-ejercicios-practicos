#include <iostream>
#include <conio.h>

using namespace std;

void pedirDatos();
int calculoSuma(int vec[],int);

int vec[100],tam;

int main(){
	
	pedirDatos();
	
	cout<<"\n\n\t\tLa sumatoria de todos los elementos es igual a: "<<calculoSuma(vec,tam)<<endl;
	
	getch();
	return 0;
}

void pedirDatos(){
	cout<<"Ingrese el tamanio del vector: "; cin>>tam;
	
	cout<<"\nRellene el vector.\n"<<endl;
	for(int i=0; i<tam; i++){
		cout<<"Valor "<<i+1<<": "; cin>>vec[i];
	}
}

int calculoSuma(int vector[], int tamanio){
	int suma=0;
	
	for(int i=0; i<tamanio; i++){
		suma += vector[i];
	}
	
	return suma;
}
