#include <iostream>
using namespace std;
#define TAM 100
int main(){
	
	int vn[TAM],cu;
	cout<<"Cuantos numeros desea ingresar: "; cin>>cu;
	
	for(int j=0;j<cu;j++){
		cout<<"Ingrese el Numero "<<j+1<<" : "; cin>>vn[j];
	}
	cout<<"Impresion de numeros de Forma Inversa:\n"<<endl;
	for(int i=cu-1;i>=0;i--){
		cout<<"Numero "<<i+1<<": "<<vn[i]<<endl;
	}
	cout<<"\n"<<endl;
	system("PAUSE");
	return 0;
}
