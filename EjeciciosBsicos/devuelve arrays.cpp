#include <iostream> 
using namespace std; 

int* manual(){ 
	int *i = new int[10];
	for(int j=0; j<10; j++){
		i[j]=j+1;
	}
	
	return i; 
} 


int main(){ 
	int *j; 
	j=manual(); 
	cout<<"Imprimiendo los valores que devuelve el array en la funcion\n\n";
	for(int k=0; k<10; k++){
		cout<<" "<<j[k]<<" ";
	}
	
	cout<<"\n\n";
	system("pause");
	
	return 0; 

}
