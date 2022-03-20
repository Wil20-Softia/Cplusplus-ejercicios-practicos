#include <iostream>
#include <cmath>
using namespace std;


int factorial(int limite1){ //funcion factorial que retornara un entero...
	int i=1;
	double fact=1;
	
	while(i<=limite1)
	{
		fact*=i;
		i++;
	}
	
	return fact;
}

double potencia(double x, int limite){
	double multiplicador=1;
	
	for(int k=0;k<limite; k++){
		multiplicador*=x;
	}

	return multiplicador;
}

int denota_signo(int a){
	if (a%2==0){
		return 1;
	}else{
		return -1;
	}

}


double seno_x(double x,int limite){//funcion de seno de x que retornara un dato vacio.
	double resultado=0;

		for(int i=0; i<=limite; i++){	
			resultado+=(potencia(x,2*i+1)/factorial(2*i+1))*denota_signo(i);
		}

	return resultado;
}	

double coseno_x(double x,int limite){
	double resultado=0;
	
		for(int j=0; j<=limite; j++){
			resultado+=(potencia(x,2*j)/factorial(2*j))*denota_signo(j);
		}

	return resultado;
}

void tangente_x(double x,int limite){
	double tangente;
	tangente=seno_x(x,limite)/coseno_x(x,limite);
	cout<< "Tangente ("<<x<<") = "<< tangente <<endl;
}

int main(){
	
	int opcion, llegada;
	double num;
	
	cout<< "\t\tSerie de Taylor de seno, coseno y tangente\n"<<endl;
	
	cout<<"Ingrese el numero de la opcion respectiva\n\n1.Seno\n2.Coseno\n3.Tangente\n"<<endl;
	cin>> opcion;
	switch(opcion){
		case 1:
			cout<<" Ingrese el numero de x para seno\n"<<endl;
			cin >> num;
			cout<<" Ingrese el limite de la serie\n"<<endl;
			cin>> llegada;
			cout<< "Seno ("<< num<<") = " <<seno_x(num,llegada)<<endl;
			break;
		case 2:
			cout<<" Ingrese el numero de x para coseno\n"<<endl;
			cin >> num;
			cout<<" Ingrese el limite de la serie\n"<<endl;
			cin>> llegada;
			cout<< "Coseno ("<< num<<") = " <<coseno_x(num,llegada) <<endl;
			break;
		case 3:
			cout<<" Ingrese el numero de x para Tangente\n"<<endl;
			cin >> num;
			cout<<" Ingrese el limite de la serie\n"<<endl;
			cin>> llegada;
			tangente_x(num,llegada);
			break;
		default:
			cout<< "\n Opcion Incorrecta\n"<<endl;
	}
	
	system ("pause");
	return 0;
	
}
