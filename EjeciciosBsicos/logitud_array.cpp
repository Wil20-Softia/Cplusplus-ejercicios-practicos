#include <iostream>
using namespace std;
 
void funcion1(int x[]){
    cout<<"Como parametro de funcion1: "<<sizeof(x)/sizeof(*x)<<" bytes.\n";
}
 
void funcion2(int *x){
    cout<<"Como parametro de funcion2: "<<sizeof(x)/sizeof(*x)<<" bytes.\n";
}
 
int main(){
    int x[10];
    int c[] = { 1, 2, 3, 4, 5 };
	cout<<"Cantidad de elemetos: "<<sizeof( c )/ sizeof (*c)<<endl;
    cout<<"Dentro del ambito en el que se ha declarado: "<<sizeof(x)<<" bytes.\n";
    funcion1(x);
    funcion2(x);
    return 0;
}
 
