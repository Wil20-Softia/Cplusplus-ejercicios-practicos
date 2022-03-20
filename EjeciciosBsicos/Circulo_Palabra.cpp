#include <iostream>
#include <cstring>

using namespace std;

void cuadrado(char palabra[]){
	
	int limite, j;

	limite=strlen(palabra);
	j=limite-2;
	
	cout<<"\t"<<palabra<<endl;
	
	for(int i=1; i<limite-1; i++){
		cout<<"\t";
		cout<<palabra[i];
		for(int k=limite-2; k>=1; k--){
			cout<<" ";
		}
		cout<<palabra[j]<<endl;
		j--;
	}
	
	cout<<"\t"<<strrev(palabra)<<endl;
	
}

int main(){
	
	char palabra[20];
	int limite;
	
	cout<<"\t\tCIRCULO DE UNA PALABRA.\n"<<endl;
	cout<<"Ingrese una Palabra: ";
	cin.getline(palabra,20,'\n');
	cout<<"\n"<<endl;
	cuadrado(palabra);
	
	cout<<"\n\n"<<endl;
	system("PAUSE");
	return 0;
	
}
