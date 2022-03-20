#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	
	int m1[100][100],m2[100][100],multi[100][100],fila1,fila2,columna1,columna2,sum=0;
	
	cout<<"\t\t\tMULTIPLICACION DE DOS MATRICES.\n"<<endl;
	
	cout<<"\t\tCuantas Filas y Columnas de la Matriz 1:\n";
	cout<<"\nFilas: "; cin>>fila1;
	cout<<"Columnas: "; cin>>columna1;
	
	cout<<"\n\t\tCuantas Filas y Columnas de la Matriz 2:\n";
	cout<<"\nFilas: "; cin>>fila2;
	cout<<"Columnas: "; cin>>columna2;
	
	//el numero de columnas de la matriz 1 debe coincidir con
	//el numero de filas de la matriz 2.
	if(columna1==fila2){
		
		//llenando la matriz1
		cout<<"\n\t\t\tRellene la Matriz 1."<<endl;
		for(int i=0; i<fila1; i++){
			for(int j=0; j<columna1; j++){
				cout<<"Posicion ["<<i+1<<"]["<<j+1<<"]: "; cin>>m1[i][j];
			}
		}
		
		//llenando la matriz2
		cout<<"\n\t\t\tRellene la Matriz 2."<<endl;
		for(int i=0; i<fila2; i++){
			for(int j=0; j<columna2; j++){
				cout<<"Posicion ["<<i+1<<"]["<<j+1<<"]: "; cin>>m2[i][j];
			}
		}
		
		//Multiplicacion de las dos matrices.
		for(int i=0; i<fila1; i++){
			for(int j=0; j<columna2; j++){
				sum=0;
				for(int h=0; h<columna1; h++){
					sum=sum+(m1[i][h]*m2[h][j]);
				}
				multi[i][j]=sum;
			}
		}
		
		//Imprimiendo matriz1
		cout<<"\n\t\t\tMATRIZ 1:\n"<<endl;
		for(int i=0;i<fila1;i++){
			for(int j=0;j<columna1;j++){
				cout<<"\t"<<m1[i][j];
			}
			cout<<"\n"<<endl;
		}
		
		//Imprimiendo matriz2
		cout<<"\n\t\t\tMATRIZ 2:\n"<<endl;
		for(int i=0;i<fila2;i++){
			for(int j=0; j<columna2; j++){
				cout<<"\t"<<m2[i][j];
			}
			cout<<"\n"<<endl;
		}
		
		//Imprimiendo la matriz resultante de la multiplicacion de las dos
		//matrices anteriores.
		cout<<"\n\t\t\tRESULTADO DE LA MULTIPLICACION DE LAS DOS MATRICES.\n"<<endl;
		for(int i=0; i<fila1; i++){
			for(int j=0; j<columna2; j++){
				cout<<"\t"<<multi[i][j];
			}
			cout<<"\n"<<endl;
		}
	}else{
		cout<<"\n\tNo se Pueden Multiplicar las Matrices.\n\tLas Columnas de la 1era No Coincide con las Filas de la 2da.\n"<<endl;
	}
	
	cout<<"\n"<<endl;
	system("PAUSE");
	return 0;
}
