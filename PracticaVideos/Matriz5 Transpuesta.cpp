#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	
	int m[3][3];
	
	cout<<"\t\t\tDe Matriz Original a Matriz Transpuesta.\n"<<endl;
	
	//Guardando numeros por el usuario.
	for(int i=0;i<3;i++){
		for(int j=0; j<3; j++){
			cout<<"Guarde un Numero en la Posicion ["<<i<<"]["<<j<<"]: ";
			cin>>m[i][j];
		}
	}
	
	//imprimiendo la matiz original ingresada por el usuario.
	cout<<"\n\t\tMATRIZ ORIGINAL.\n"<<endl;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<"\t"<<m[i][j];
		}
		cout<<"\n"<<endl;
	}
	
	cout<<"\n\t\tMATRIZ TRANSPUESTA.\n"<<endl;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<"\t"<<m[j][i];
		}
		cout<<"\n"<<endl;
	}
	
	cout<<"\n"<<endl;
	system("PAUSE");
	return 0;
}
