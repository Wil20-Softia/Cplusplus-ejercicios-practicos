#include <iostream>
#include <cmath>
using namespace std;

#define T 60

double prom(int v[],int a){
	
	double acum,promedio;
	
	for(int i=0;i<a;i++){
		acum+=v[i];
	}
	
	promedio=acum/a;
	
	return promedio;
}

int main(){
	
	int i=0,v[T];
	char dec;
	cout<<"\t\t\tCalcula el Promedio de los numeros."<<endl;
	do{
		cout<<"Ingrese el numero: "; cin>>v[i];
		cout<<"\t\tContinuar S o Salir N: "; cin>>dec;
		cout<<"\n"<<endl;
		i++;
	}while(dec=='s' || dec=='S');
	
	cout<<"El Promedio de Todos los numero es = "<<prom(v,i-1)<<endl;
	
	cout<<"\n\n"<<endl;
	system("PAUSE");
	return 0;
}
