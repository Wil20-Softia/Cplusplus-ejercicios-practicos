/*Realizar un programa para obtener el mayor valor de 3 numeros y 
el menor de esos 3*/

#include <iostream>
using namespace std;

int main()
{
	int a,b,c;
	
	cout<<"\t\tDICE EL VALOR MAYOR Y MENOR DE LOS TRES NUMEROS\n\n"<<endl;
	cout<<"\tIntroduzca 3 numeros:\n"<<endl;
	cout<<"a =";
	cin>>a;
	cout<<"b =";
	cin>>b;
	cout<<"c =";
	cin>>c;
	
	if ((a>b&&a>c)||(b>a&&b>c)||(c>a&&c>b))
	{
		if(a>b&&a>c)
		{
			cout<<"El mayor es: "<<a<<endl;
			if(c==b){
				cout<<"El menor es: "<<b<<endl;
			}	
		}
		else if(b>a&&b>c)
		{
			cout<<"El mayor es: "<<b<<endl;
			if(a==c){
				cout<<"El menor es: "<<c<<endl;
			}	
		}
		else if(c>a&&c>b)
		{
			cout<<"El mayor es: "<<c<<endl;
			if(a==b){
				cout<<"El menor es: "<<a<<endl;
			}	
		}
	}
	
	if ((a<b&&a<c)||(b<a&&b<c)||(c<a&&c<b)){
		if(a<b&&a<c)
		{
			cout<<"El menor es: "<<a<<endl;
			if(b==c){
				cout<<"El mayor es: "<<b<<endl;
			}	
		}
		else if(b<a&&b<c)
		{
			cout<<"El menor es: "<<b<<endl;	
			if(a==c){
				cout<<"El mayor es: "<<c<<endl;
			}
		}
		else if(c<a&&c<b)
		{
			cout<<"El menor es: "<<c<<endl;	
			if(a==b){
				cout<<"El mayor es: "<<a<<endl;
			}
		}
	}
	
	system("PAUSE");
	return 0;
}
