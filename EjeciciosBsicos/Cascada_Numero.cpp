#include <iostream>
using namespace std;

int main()
{
	int n;
	cout<<"                    CASCADA DE NUMERO."<<endl;
	cout<<"  "<<endl;
	cout<<"     Ingrese un numero"<<endl;
	cin>>n;
	
	for(int i=0; i<=n; i++){
		
		for(int j=1; j<=i; j++){
			
			cout<<j;
		}
		cout<<"  "<<endl;
	}
	system("PAUSE");
	return 0;
}
