#include <iostream>
using namespace std;

double factorial(double a){
	
	double fact=1;
	
	for(int i=0; i<a; i++){
		fact=fact*(i+1);
	}
	return fact;
}

int main(){
	
	double num;
	
	cout<<"Introduzca el Numero para Sacar el Factorial"<<endl;
	
	cin>> num;
	
	cout<<" El factorial es= "<< factorial(num)<<endl;
}
