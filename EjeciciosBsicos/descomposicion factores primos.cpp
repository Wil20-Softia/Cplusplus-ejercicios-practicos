#include <iostream>
using namespace std;

int* descompone_factorPrimo(int numero,int& tamanio){
	int j=0, i, numero_s=0;
	
	numero_s=numero;
	
	//SACA EL TAMAÑO QUE POSTERIORMENTE TENDRA EL ARREGLO
	while(numero!=1){
		i=2;
		while(numero%i!=0){
			i++;
		}
		numero=numero/i;
		j++;
	}
	
	//SE SACARA EL RESULTADO DE LA DESCOMPOSICION DE LOS NUMEROS PRIMOS.
	int *n = new int[j];
	int x=0;
	
	while(numero_s!=1){
		i=2;
		
		while(numero_s%i!=0){
			i++;
		}		
		n[x]=i;
		numero_s=numero_s/i;
		x++;
	}
	
	//Retorna el Tamaño del Array
	tamanio=x;
	//RETORNA EL ARRAY DE LOS NUMEROS
	return n;
}

int minimo_comun_multiplo(int n[],int tamanio){
	
}

int main(){
	
	
	int tam=0,cant=0;
	
	cout<<"****************MINIMO COMUN MULTIPLO***********"<<endl;
	cout<<"\n\n";
	cout<<"Cuantos Numero va a utilizar: "; cin>>cant;
	system("cls");
	
	int numero[cant];
	
	do{
		cout<<"\n\t\tIntroduzca Numero "<<tam+1<<": "; cin>>numero[tam];
		system("cls");
		tam++;
	}while(tam!=cant);
	
	cout<<"El Minimo Comun Multiplo (MCM) de: ";
	
	for(int k=0; k<tam; k++){
		cout<<numero[k]<<", ";
	}
	
	cout<<"es igual a: "<<minimo_comun_multiplo(numero,tam)<<endl;
	
	cout<<"\n\n\n";
	system("PAUSE");
	return 0;
}
