#include <iostream>
using namespace std;

int main(){
	int n[2][2]={{12,24},{36,48}};
	int m[2][2];
	
	//Copiando de una matriz a otra.
	for(int i=0; i<2; i++){
		for(int h=0; h<2; h++){
			m[i][h]=n[i][h];
		}
	}
	cout<<"\n"<<endl;//Salto de linea para que se vea pegado en la esquina.
	
	//Imprimiendo la matriz a la que fue copiada la informacion.
	for(int i=0; i<2; i++){
		for(int h=0; h<2; h++){
			cout<<"\t"<<m[i][h];
		}
		cout<<"\n"<<endl;
	}
	cout<<"\n"<<endl;
	system("PAUSE");
	return 0;
}
