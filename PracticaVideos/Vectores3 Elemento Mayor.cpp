#include <iostream>
using namespace std;

int main(){
	
	int numeros[100],n,may=0;
	
	cout<<"Digite el numero de elementos del arreglo: ";
	cin>>n;
	
	for(int i=0; i<n; i++){
		cout<<i+1<<". Digite un Numero: "; cin>>numeros[i];
		
		if(numeros[i]>may){
			may=numeros[i];
		}
	}
	
	cout<<"\nEl numero mayor es: "<<may<<endl;
	
	cout<<"\n"<<endl;
	system("PAUSE");
	return 0;
}
