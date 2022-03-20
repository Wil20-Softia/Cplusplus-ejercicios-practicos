#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	int numeros[]={1,2,3,4,5};
	int inf,sup,mitad,dato;
	char band='F';
	dato=7;
	//Algoritmo del Metodo de Binario.
	inf=0;
	sup=5;
	while(inf<=sup){
		mitad=(inf+sup)/2;
		if(numeros[mitad]==dato){
			band='V';
			break;
		}else if(numeros[mitad]>dato){
			sup=mitad;
			mitad=(inf+sup)/2;
		}else if(numeros[mitad]<dato){
			inf=mitad;
			mitad=(inf+sup)/2;
		}	
	}
	if(band=='V'){
		cout<<"\n\t\tEl Numero a sido Encontrado en la Posicion: "<<mitad<<".\n"<<endl;
	}else{
		cout<<"\n\t\tEl Numero No a sido Encontrado.\n"<<endl;
	}
	cout<<"\n"<<endl;
	system("PAUSE");
	return 0;
}
