/*Cree un programa que cumpla las siguientes condiciones.
declara un arreglo con la denominacion deseada.
establece para cada uno de sus indices que el contenido sea
"Buscador" donde buscador estara definido letra a letra utilizando
los elementos del arreglo. responda: a)que indice tiene el primer
elemento y el ultimo b)Que ocurre si intentamos mostrar por pantalla
una letra con un indice que no esta definido c)modifica la cuarta letra
para que la letra c pase a ser la letra e d)mostrar los 2 arreglos para
ver la difencia de las dos cadenas.*/

#include <iostream>
#include <cstring>
using namespace std;

int main(){
	
	char cc[9]={'b','u','s','c','a','d','o','r','\0'};
	char c[9];
	
	cout<<"\t\tEJERCICIO DE CADENAS DE CARACTERES 3. PROCESAMIENTO DE DATOS:\n\n"<<endl;
	cout<<"El Primer Elemento: <<"<<cc[0]<<">>; Contiene el indice 0"<<endl;
	cout<<"El Ultimo Elemento: <<"<<cc[8]<<">>; Contiene el indice 8"<<"\n"<<endl;
	
	cout<<"Esto es lo que ocurre cuando sacamos por pantalla una letra que no tiene indice definido."<<endl;
	cout<<"Este indice no esta definido: <<"<<cc[9]<<">>\n"<<endl;
	
	cout<<"Primera Cadena: "<<cc<<endl;
	for(int i=0;i<strlen(cc);i++){
		
		if(i==3 && cc[i]=='c'){
			cc[i]='e';
			c[i]=cc[i];
		}
		else{
			c[i]=cc[i];
		}
			
	}
	
	cout<<"Segunda Cadena: "<<c<<"\n"<<endl;
	
	cout<<"\n\n"<<endl;
	system("PAUSE");
	return 0;
}
