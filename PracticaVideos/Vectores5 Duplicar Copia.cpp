#include <iostream>
using namespace std;

int main(){
	int vec1[5],vec2[5];
	
	cout<<"Ingrese 5 numeros cualesquiera"<<endl;
	
	for(int i=0; i<5; i++){
		cout<<"Numero "<<i+1<<": "; cin>>vec1[i];
		vec2[i]=vec1[i]*2;
	}
	
	cout<<"Los numeros Fueron Guardados y duplicados."<<endl;
	
	for(int i=0; i<5; i++){
		cout<<i+1<<". "<<vec2[i]<<endl;
	}
	
	cout<<"\n"<<endl;
	system("PAUSE");
	return 0;
}
