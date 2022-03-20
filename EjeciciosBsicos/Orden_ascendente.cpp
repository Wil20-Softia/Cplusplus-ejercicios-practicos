#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
int a,b,temp;
cout<<"Ingrese un numero: "<<endl; cin>>a;
cout<<"Ingrese un segundo numero: "<<endl; cin>>b;
if (a>b)
{
	temp=a;
	a=b;
	b=temp;
}
cout<<"Ordenando "<<a<<" y "<<b<<" de menor a mayor seria: "<<a<<" , "<<b;

getch();
}
