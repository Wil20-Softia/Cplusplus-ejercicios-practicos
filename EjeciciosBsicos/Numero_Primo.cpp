#include <iostream>
using namespace std;

int main()
{
	
	int num, cont=0;
	cout<<"           DICE SI ES NUMERO PRIMO O NO"<<endl;
	cout<<endl<<" Ingrese un numero"<<endl;
	cin>>num;
	for(int i=1; i<=num; i++){
		if(num%i==0){
			cont++;
		}
	}
	if(cont==2){
		cout<<"El numero es Primo"<<endl;
	}
	else{
		cout<<"El numero No es Primo"<<endl;
	}
	
	system("PAUSE");
	
}
