#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	
	int matrix[100][100],matriz[100][100],filas,columnas;
	
	srand(time(NULL));
	cout<<"\t\t\tMATRIZ DE NUMEROS ALEATORIOS.\n"<<endl;
	cout<<"Filas: "; cin>>filas;
	cout<<"Columnas: "; cin>>columnas;
	
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			matrix[i][j]=1+rand()%100;
			matriz[i][j]=matrix[i][j];
		}
	}
	
	cout<<"\t\t\tLa Matriz Resultante es: \n"<<endl;
	
	for(int i=0; i<filas; i++){
		for(int j=0; j<columnas; j++){
			cout<<"\t"<<matriz[i][j];
		}
		cout<<"\n"<<endl;
	}
	
	cout<<"\n"<<endl;
	system("PAUSE");
	return 0;
}
