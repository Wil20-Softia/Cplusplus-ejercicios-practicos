/*desarrollar un progama en c++ usando funciones que dado un vector
de 10 numeros enteros permita determinar la suma de todos
los numeros mayores a 10 y menores a 90
*/
#include <iostream>

using namespace std;

int suma (int n[]){
	int acum=0;
	
	for(int i=0; i<10; i++){
		if(n[i]>10 && n[i]<90){
			acum=acum+n[i];
		}
	}
	return acum;
}

int main(){
	
	int vector[10];
	
	for(int i=0; i<10; i++){
		cout<<"Ingrese el numero"<<" "<<i+1<<endl;
		cin>>vector[i];
	}
	
	cout<<" La suma de los numeros es: "<<suma(vector)<<endl;
	
	system("PAUSE");
	return 0;
}


