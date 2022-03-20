/*Realizar un programa que ingrese una palabra y diga si es simetrica
en sentido contrario.....Wilson Escalona*/

#include <iostream>
#include <cstring>
using namespace std;

void programa(char c[]);

int main(){
	
	char palabra1[]="";
	
	cout<<"\t\t\tDICE SI UNA PALABRA ES SIMETRICA O NO.\n"<<endl;
	cout<<"Ingrese una palabra: "<<endl;
	gets(palabra1);
	cout<<"\n"<<endl;
	programa(palabra1);
	
	cout<<"\n\n"<<endl;
	system("PAUSE");
	return 0;

}

void programa(char c[]){
	
	char cadena[100];
	char cadena1[100];

	strcpy(cadena,c);
	
	strrev(c);
	
	strcpy(cadena1,c);
	
	cout<<"Palabra Normal: "<<cadena<<"\n"<<endl;
	cout<<"Palabra Invertida: "<<cadena1<<"\n"<<endl;
	
	if(strcmp(cadena1,cadena)==0){
		cout<<"La Palabra es simetrica"<<endl;
	}else{
		cout<<"La Palabra no es simetrica"<<endl;
	}		
}
