#include <iostream>
#include <cmath>
using namespace std;

void descomponer(int a){
	
	int b,c;
	
	for(int i=0;i<a;i++){
		b=i+1;
		cout<<b<<" "<<pow(b,2)<<" ";
		c=b/b;
		for(int j=1;j<=b;j++){
			cout<<c<<" ";
			c+=2;
		}
		cout<<"\n"<<endl;
	}
}

int main(){
	
	int num;
	
	cout<<"\t\t\tDESCOMPONE LOS CUADRADOS DE LOS NUMEROS.\n"<<endl;
	cout<<"Ingrese un Numero: ";
	cin>>num;
	
	cout<<"\n\t\tLA DESCOMPOSICION DE LOS CUADRADOS DE LOS NUMEROS HASTA EL "<<num<<" ES:\n"<<endl;
	
	descomponer(num);
	
	cout<<"\n\n"<<endl;
	system("PAUSE");
	return 0;
}

