#include <iostream>
using namespace std;

int main(){
	
	int a, j=0;
	
	cout<<"\tNumeros Pefectos\n"<<endl;
	
	cout<< "\nIngrese un Numero"<<endl;
	
	cout<< "\nNumero= ";
	cin>> a;
	
	for(int i=1; i<a; i++){
		
		if( (a%i) == 0){
			j+=i;
		}
	}
	
	if(a == j){
		cout<<" El Numero "<< a << " Es Perfecto"<<endl;
	}else{
		cout<<" El Numero "<< a << " No es Perfecto"<<endl;
	}
	
	system("pause");
	
	return 0;
}
