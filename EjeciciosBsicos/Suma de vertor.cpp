/*Hacer un programa que sume todos los numeros que esten dentro
de un vector y los pida al usuario y los almacene en él.*/

#include <iostream>
using namespace std;

int suma(int v[],int n){
	
	if(n==0){
		return v[n];
	}
	else{
		return v[n]+suma(v,n-1);
	}
}

int main(){
	
	int tam;
	
	cout<<"Introduzca cuantos numeros desea sumar"<<endl;
	cin>>tam;
	
	int vector[tam];
	
	for(int i=0; i<tam; i++){
		cout<<"Introduzca el numero "<<i+1<<":";
		cin>>vector[i];
	}
	cout<<"  "<<endl;
	
	cout<<"La suma de todos los numeros que introdujo es = "<<suma(vector,tam-1)<<endl;
	
	system("PAUSE");
	return 0;
}
