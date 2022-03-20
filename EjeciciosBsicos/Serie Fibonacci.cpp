#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main(){
	
	#define TAM 100
	int x,i=0,v[TAM],j;
	
	v[i]=i; v[i+1]=i+1;
	
	cout<<"Ingrese un numero"<<endl;
	cin>>j;
	
	cout<<endl;
	
	cout<<v[i+1]<<" ";

	for(x=1;x<j;x++){
		v[x+1]=v[x-1]+v[x];
		cout<<v[x+1]<<" ";
	}
	
	cout<<"\n\n"<<endl;
	system("PAUSE");
	return 0;
}
