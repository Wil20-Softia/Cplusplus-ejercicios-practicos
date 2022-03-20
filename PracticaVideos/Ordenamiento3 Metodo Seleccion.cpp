#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	int aux,min,i=0,j=0,h=0,numeros[100];
	char d;
	
	cout<<"\t\t\tMETODO DE SELECCION.\n"<<endl;
	
	//Ingresando Numeros a al Vector.
	do{
		cout<<i+1<<". Numero: "; cin>>numeros[i];
		cout<<"\tContinuar <<S>> Salir <<N>>: "; cin>>d;
		i++;
	}while(d=='s' || d=='S');
	
	
	//Metodo de Ordenamiento de Seleccion.
	for(h=0;h<i;h++){
		min=h;
		for(j=h+1;j<i;j++){
			if(numeros[j]<numeros[min]){
				min=j;
			}
		}
		aux=numeros[h];
		numeros[h]=numeros[min];
		numeros[min]=aux;
	}
	
	//Imprimir de menor a mayor.
	cout<<"\n\t\tOrden Ascendente: ";
	for(h=0;h<i;h++){
		cout<<numeros[h]<<" ";
	}
	
	//Imprimir de mayor a menor.
	cout<<"\n\t\tOrden Descendente: ";
	for(h=i-1;h>=0;h--){
		cout<<numeros[h]<<" ";
	}
	
	
	cout<<"\n"<<endl;
	system("PAUSE");
	return 0;
}
