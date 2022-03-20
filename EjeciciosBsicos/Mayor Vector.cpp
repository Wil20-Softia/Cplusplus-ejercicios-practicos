/*Desrrollar recursivo en c++ que permita determinar cual es el 
numero mayor contenido en un vector*/

#include <iostream>
using namespace std;

int mayor(int v[],int n){
	
	int guar;
	
	if(n==0){
		return v[n];
	}
	else{
		guar=mayor(v,n-1);
		if(v[n]>guar){
			return v[n];
		}
		else{
			return mayor(v,n-1);
		}
	}
}

int main(){
	
	int tam;
	
	cout<<"Introduzca el tamanyo del vector"<<endl;
	cin>>tam;
	
	int vector[tam];
	
	for(int i=0; i<tam; i++){
		cout<<"Introduzca el numero "<<i+1<<":";
		cin>>vector[i];
	}
	cout<<"  "<<endl;
	
	cout<<"El numero mayor de todos es = "<<mayor(vector,tam-1)<<endl;
	
	system("PAUSE");
	return 0;
}
