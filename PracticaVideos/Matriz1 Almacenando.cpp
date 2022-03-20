#include <iostream>
using namespace std;

int main(){
	
	int matriz[100][100],f,c;
	
	cout<<"Ingrese el Numero de Filas: "; cin>>f;
	cout<<"Ingrese el Numero de Columnas: "; cin>>c;
	
	for(int i=0; i<f;i++){
		for(int j=0; j<c; j++){
			cout<<"Ingrese el Numero en la Posicion ["<<i<<"]["<<j<<"]: ";
			cin>>matriz[i][j];
		}
	}
	
	cout<<"\nLa Matriz de los Numeros es: \n"<<endl;
	
	for(int i=0; i<f; i++){
		for(int j=0; j<c; j++){
			cout<<"\t"<<matriz[i][j]<<" ";
		}
		cout<<"\n";
	}
	
	cout<<"\n"<<endl;
	system("PAUSE");
	return 0;
}
