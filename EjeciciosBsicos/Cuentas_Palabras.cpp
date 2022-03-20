#include <iostream>
#include <cstring>
using namespace std;

int cuenta_palabras(char cadena[]);
int cuenta_letras(char cadena[]);
int cuenta_caracteres(char cadena[]);

int main(){
	
	char cadena[]="";
	
	cout<<"\t\t\t\tCUENTA LAS PALABRAS, LETRAS Y LOS CARACTERES DE UNA CADENA\n\n"<<endl;
	
	cout<<"\nIngrese la Cadena de Caracteres:\n"<<endl;
	gets(cadena);
	
	cout<<"\n"<<endl;
	
	cout<<"\tHay:\n"<<endl;
	cout<<"Palabras: "<<cuenta_palabras(cadena)<<endl;
	cout<<"Letras: "<<cuenta_letras(cadena)<<endl;
	cout<<"Caracteres: "<<cuenta_caracteres(cadena)<<endl;
	
	cout<<"\n\n"<<endl;
	
	system("PAUSE");
	return 0;
}


int cuenta_palabras(char cadena[]){
	
	int palabra=0;

	for(int i=1;i<strlen(cadena);i++){
		if((cadena[i]>=65 && cadena[i]<=90)&&cadena[i-1]==32){
			palabra++;
		}
		else if((cadena[i]>=97&&cadena[i]<=122)&&cadena[i-1]==32){
			palabra++;
		}
	}
	
	if(cadena[0]>=65 && cadena[0]<=122){
		palabra++;
	}
	
	return palabra;
}

int cuenta_letras(char cadena[]){
	
	int letras=0;
	
	for(int i=0;i<strlen(cadena);i++){
		if((cadena[i]>=33 && cadena[i]<=237)){
			letras++;
		}
	}
	
	return letras;
	
}

int cuenta_caracteres(char cadena[]){
	
	int caracteres=0;
	
	for(int i=0;i<strlen(cadena);i++){
		if((cadena[i]>=32 && cadena[i]<=253)){
			caracteres++;
		}
	}
	
	return caracteres;
	
}

