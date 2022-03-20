#include <iostream>
using namespace std;

int main(){
	
	int limite1, limite2, i, j;
	
	cout<<"                    TABLAS DE MULTIPLICAR"<<endl<<"  "<<endl;
	
	cout<<"     ¿Cuantas Tablas de Multiplicar Deseas Ver?"<<endl<<"  "<<endl; cin>>limite1;
	
	cout<<"     ¿Hasta que Numero Deseas que Llegue Cada Tabla"<<endl<<"  "<<endl; cin>>limite2;
	
	for(i=1; i<=limite1; i++){
		
		cout<<"  "<<endl;
		
		for(j=1; j<=limite2; j++){
			
			cout<<i<<" x "<<j<<" = "<<i*j<<endl;
			
		}
	}
	system("PAUSE");
	return 0;
}
