#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	
	int n,d,c=0;
	
	srand(time(NULL));
	
	//variable= limite_inferior + rand() % ((limite_superior + 1) - limite_inferior);
	d=1+rand()%(100);
	
	cout<<"\t\tADIVINA EL NUMERO:\n\n"<<endl;
	do{
		cout<<"Digite un numero: "; cin>>n;
		
		if(n>d){
			cout<<"\nDigite un numero menor\n";
		}else if(n<d){
			cout<<"\nDigite un numero mayor\n";
		}
		
		c++;
	}while(n!=d);
	
	cout<<"\nFELICIDADES ADIVINASTES EL NUMERO\n";
	cout<<"Numero de Intentos: "<<c<<endl;
	
	cout<<"\n\n"<<endl;
	system("PAUSE");
	return 0;
}
