#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	
	int mt1[100][100],mt2[100][100],sm[100][100],fi,col;
	
	cout<<"\t\t\tSUMA DE MATRICES\n"<<endl;
	cout<<"\nCuantas Filas: "; cin>>fi;
	cout<<"Cuantas Columnas: "; cin>>col;
	cout<<"\n\t\tRellene la Primera matriz:\n"<<endl;
	//Pidiendo guardar en la matriz 1
	for(int i=0;i<fi;i++){
		for(int j=0;j<col;j++){
			cout<<"Numero en la Posicion ["<<i+1<<"]["<<j+1<<"]: ";
			cin>>mt1[i][j];
		}
	}
	
	cout<<"\n\t\tRellene la Segunda matriz:\n"<<endl;
	//Pidiendo la Matriz 2.
	for(int i=0;i<fi;i++){
		for(int j=0;j<col;j++){
			cout<<"Numero en la Posicion ["<<i+1<<"]["<<j+1<<"]: ";
			cin>>mt2[i][j];
		}
	}
	
	cout<<"\n\t\tSuma Resultante de las Matrices:\n"<<endl;
	//Imprimiendo la suma de las dos matrices.
	for(int i=0;i<fi;i++){
		for(int j=0;j<col;j++){
			sm[i][j]=mt1[i][j]+mt2[i][j];
			cout<<"\t"<<sm[i][j];
		}
		cout<<"\n"<<endl;
	}
	cout<<"\n"<<endl;
	system("PAUSE");
	return 0;
}
