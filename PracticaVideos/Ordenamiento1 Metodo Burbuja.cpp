#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	
	int v[100],h=0,i=0,j=0,aux;
	char d;
	
	cout<<"\t\t\tMETODO BURBUJA.\n"<<endl;
	
	//Ingresando Numeros a al Vector.
	do{
		cout<<i+1<<". Numero: "; cin>>v[i];
		cout<<"\tContinuar <<S>> Salir <<N>>: "; cin>>d;
		i++;
	}while(d=='s' || d=='S');
	
	cout<<"\n\t\t\tNUMEROS ORDENADOS:\n"<<endl;

	//Metodo Burbuja.
	for(h=0; h<i; h++){
		for(j=0; j<i; j++){
			if(v[j]>v[j+1]){
				aux=v[j+1];
				v[j+1]=v[j];
				v[j]=aux;
			}
		}
	}
	
	//Impresion de menor a mayor
	cout<<"\n\tOrden Ascendente: ";
	for(h=0; h<i; h++){
		cout<<v[h]<<" ";
	}
	
	//Impresion de mayor a menor
	cout<<"\n\tOrden Descendente: ";
	for(h=i-1;h>=0;h--){
		cout<<v[h]<<" ";
	}
	
	cout<<"\n"<<endl;
	system("PAUSE");
	return 0;
}
