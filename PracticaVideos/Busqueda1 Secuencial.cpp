#include <iostream>
#include <cstring>
using namespace std;

int main(){
	
	int a[]={3,2,4,1,5};
	int i, dato;
	char d='F';
	
	cout<<"\t\t\tBUSQUEDA SECUENCIAL.\n"<<endl;
	
	dato=7;
	
	//Busqueda Secuencial.
	i=0;
	while((d=='F') && (i<5)){
		if(a[i]==dato){
			d='V';
		}
		i++;	
	}
	
	if(d=='F'){
		cout<<"\n\t\tEl Numero a Buscar No se Encuentra en el Arreglo.\n"<<endl;
	}else if(d=='V'){
		cout<<"\n\t\tEl Numero a Buscar se Encuentra en la Posicion "<<i-1<<"\n"<<endl;
	}
	
	cout<<"\n"<<endl;
	system("PAUSE");
	return 0;
}
