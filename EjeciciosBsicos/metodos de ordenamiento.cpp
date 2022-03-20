#include <iostream>
using namespace std;

/*Metodos de Ordenamiento Simples:
	Metodo Burbuja
	Metodo de Seleccion
	Metodo de Insercion
		
		Metodo de Burbuja para ordenar clases:
		
		supongamos que hay una clase persona.
			string aux,aux1,aux2;
			Persona *P=new Persona[100];
			
			if(P[i].mosCedula()<P[i-1].mostrarCedula()){
				aux=P[i].mosCedula();
				P[i].guardarCedula(P[i-1].mosCedula());
				P[i-1].guardarCedula(aux);
				
				aux1=P[i].mosNombre();
				P[i].guardarNombre(P[i-1].mosNombre());
				P[i-1].guardarNombre(aux1);
				
				aux2=P[i].mosDireccion();
				P[i].guardarDireccion(P[i-1].mosDireccion());
				P[i-1].guardarDireccion(aux2);
			}
		
*/
		
void Burbuja(int v[], int n){
	int aux;
	for(int h=0; h<n; h++){
		for(int j=0; j<n; j++){
			if(v[j]>v[j+1]){
				aux=v[j+1];
				v[j+1]=v[j];
				v[j]=aux;
			}
		}
	}
	
	for(int i=0; i<n; i++){
		cout<<v[i]<<" ";
	}	
}

void Seleccion(int v[], int n){
	int min,aux;
	for(int h=0;h<n;h++){
		min=h;
		for(int j=h+1;j<n;j++){
			if(v[j]<v[min]){
				min=j;
			}
		}
		aux=v[h];
		v[h]=v[min];
		v[min]=aux;
	}
	
	for(int i=0; i<n; i++){
		cout<<v[i]<<" ";
	}
}

void Insercion(int v[], int n){
	int aux,pos;
	for(int h=0;h<n;h++){
		pos=h;//Variable pos toma el valor del iterador
		aux=v[h];	//aux toma el valor del numero en 
						//numeros[] posicion h.
		/*Entra en el bucle cuando pos es mayor que 0 y si numeros[]
		en la posicion pos-1 es mayor que aux. Este bucle hace la 
		funcion de que si el numero a la izquierda de la posicion
		actual es mayor, situa al numero de la izquierda en la poscion
		actual, asi sucesivamente hasta que pos se 0.*/
		while((pos>0)&&(v[pos-1]>aux)){
			v[pos]=v[pos-1];
			pos--;
		}
		/*Este es para refrescar la posicion actual que es la numeros[0]
		en la posicion anterior numeros[h] h es el iterador*/
		v[pos]=aux;
	}
	
	for(int i=0; i<n; i++){
		cout<<v[i]<<" ";
	}
}

int main(){
	
	int v[5]={5,2,8,1,3};
	
	cout<<"Vector Desordenado: "<<endl;
	
	for(int i=0; i<5; i++){
		cout<<v[i]<<" ";
	}	
	cout<<"\nMetodo Burbuja: "<<endl;
	Burbuja(v,5);

	cout<<"\nMetodo Seleccion: "<<endl;
	Seleccion(v,5);
	
	cout<<"\nMetodo Insercion: "<<endl;
	Insercion(v,5);
	cout<<"\n"<<endl;
	system("PAUSE");
	return 0;
}
