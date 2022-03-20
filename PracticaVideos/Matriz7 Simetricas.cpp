#include <iostream>
#include <cstring>
using namespace std;

int main(){
	
	int num[100][100],filas,columnas,cont=0;
	cout<<"\t\t\tMATRIZ SIMETRICA O NO.\n"<<endl;
	cout<<"\nFilas: "; cin>>filas;
	cout<<"Columnas: ";cin>>columnas;
	cout<<"\n\t\tRellene la Matriz:\n"<<endl;
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			cout<<"Posicion ["<<i+1<<"]["<<j+1<<"]: ";
			cin>>num[i][j];
		}
	}
	
	for(int i=0;i<filas;i++){
		for(int j=0;j<columnas;j++){
			if(num[i][j]==num[j][i]){
				cont++;
			}
		}
	}
	
	if(filas==columnas){
		if(cont==(filas*columnas)){
			cout<<"\n\tSi es Simetrica la Matriz.\n"<<endl;
		}else{
			cout<<"\n\tNo es Simetrica la Matriz.\n"<<endl;
		}
	}else{
		cout<<"\n\tNo es Simetrica la Matriz.\n"<<endl;
	}
	
	
	cout<<"\n"<<endl;
	system("PAUSE");
	return 0;
}
