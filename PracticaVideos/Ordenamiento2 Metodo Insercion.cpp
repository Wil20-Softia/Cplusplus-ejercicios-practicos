#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
	
	int aux,pos,i=0,h,numeros[100];
	char d;
	
	cout<<"\t\t\tMETODO INSERCION.\n"<<endl;
	
	//Ingresando Numeros a al Vector.
	do{
		cout<<i+1<<". Numero: "; cin>>numeros[i];
		cout<<"\tContinuar <<S>> Salir <<N>>: "; cin>>d;
		i++;
	}while(d=='s' || d=='S');
	
	
	//Metodo de Ordenamiento de Insercion.
	for(h=0;h<i;h++){
		pos=h;//Variable pos toma el valor del iterador
		aux=numeros[h];	//aux toma el valor del numero en 
						//numeros[] posicion h.
		/*Entra en el bucle cuando pos es mayor que 0 y si numeros[]
		en la posicion pos-1 es mayor que aux. Este bucle hace la 
		funcion de que si el numero a la izquierda de la posicion
		actual es mayor, situa al numero de la izquierda en la poscion
		actual, asi sucesivamente hasta que pos es 0.*/
		while((pos>0)&&(numeros[pos-1]>aux)){
			numeros[pos]=numeros[pos-1];
			pos--;
		}
		/*Este es para refrescar la posicion actual que es la numeros[0]
		en la posicion anterior numeros[h] h es el iterador*/
		numeros[pos]=aux;
	}
	
	//Imprimir de menor a mayor.
	cout<<"\n\t\tOrden Ascendente: ";
	for(h=0;h<i;h++){
		cout<<numeros[h]<<" ";
	}
	
	//Imprimir de mayor a menor.
	cout<<"\n\t\tOrden Descendente: ";
	for(h=i-1;h>=0;h--){
		cout<<numeros[h]<<" ";
	}
	
	cout<<"\n"<<endl;
	system("PAUSE");
	return 0;
}
