#include <iostream>
using namespace std;

int main(){
	
	int vnu[100],n,sum=0;
	int tv=0,tf=0;
	
	cout<<"Que cantidad de numeros desea ingresar: "; cin>>n;
	
	for(int i=0; i<n; i++){
		cout<<"Ingrese numero "<<i+1<<": ";
		cin>>vnu[i];
		
		sum+=vnu[i];
		
		//if(i>1 && vnu[i]==sum){
		//	cout<<"\nEl numero "<<vnu[i]<<" es igual a la suma de sus anteriores.\n"<<endl;
		//}
	}
	
	for(int i=0; i<n; i++){
		if(vnu[i]==(sum-vnu[i])){
			cout<<"\nEl Numero "<<vnu[i]<<" Equivale a la Suma del resto de Numeros Ingresados.\n"<<endl;
			tv++;
		}else{
			tf++;
			//cout<<"\nEl Numero "<<vnu[i]<<" No Equivale a la Suma del resto de Numeros Ingresados.\n"<<endl;
		}
	}
	
	if(tv==0&&tf>0){
		cout<<"\nNo Hay numeros en el Vector que hagan la suma del resto\n"<<endl;
	}
	cout<<"\n"<<endl;
	system("PAUSE");
	return 0;
}
