#include <iostream>
#include <iomanip>//setprecision
#include <cmath>
#include <windows.h>

#define PRECISION 10
#define MAX_ITERACIONES 100
#define INTERVALOS 6

using namespace std;

void tabula(double a,double b,int intervalos);//Muestra un numero tabulado de intervalos
double f(double x);//Retorna el valor de la funcion evaluada en x
double f_derivada(double x);//Retorna la derivada de la funcion evaluada en x
void newton_raphson(double x0, double tolerancia,int max_iteraciones);//Funcion que calcula la raiz aproximada de una funcion

int main(){
	
	double a,b;
	double tolerancia; //tolerancia
	double x0; //Primera Aproximacion
	
	cout<<setprecision(PRECISION);//Se Establece la Precision
	
	cout<<"\nCalculo de la Raices de una Funcion Aplicando el Metodo de Newton - Raphson\n";
	cout<<"\nIngrese el Intervalo Inicial [a,b]:"<<endl;
	
	//se ingresa el intervalo.
	cout<<"\na= "; cin>>a;
	cout<<"b= "; cin>>b;
	
	//se tabulan los valores de f para INTERVALOS intervalos.
	tabula(a,b,INTERVALOS);
	
	//Se pide elegir una aproximacion inicial.
	cout<<"\nEscoja el Punto Inicial Adecuado: x0= "; cin>>x0;
	
	//Se pide Ingresar la Tolerancia 
	cout<<"\nTolerancia= "; cin>>tolerancia;
	
	//Newton - Raphson.
	newton_raphson(x0,tolerancia,MAX_ITERACIONES);
	
	cout<<"\n\n"<<endl;
	system("PAUSE");
	return 0;
}

void tabula(double a,double b,int intervalos){
	
	int puntos=intervalos+1;
	
	double ancho=(b-a)/intervalos;
	
	cout<<"\n\tx\t\tf(x) "<<endl;
	for(int i=0;i<puntos;i++){
		cout<<"\t"<<a<<"\t\t"<<f(a)<<endl;
		a+=ancho;
	}
}

double f(double x){
	
	return ((x*exp(cos(x)))/1.5)-1;
}

double f_derivada(double x){
	
	return exp(cos(x))*(1-x*sin(x))/1.5;
}

void newton_raphson(double x0,double tolerancia,int max_iteraciones){
	
	double x1;//siguiente aproximacion
	double error;//diferencia entre dos aproximaciones sucesivas: x1 - x0.
	int iteracion;//numero de iteraciones.
	bool converge=true;
	
	//se imprime los valores de la primera aproximacion.
	cout<<"\nAproximacion Inicial:\n";
	cout<<"x0= "<<x0<<"\n"<<"f(x0)= "<<f(x0)<<"\n"<<"f'(x0)= "<<f_derivada(x0)<<endl;
	
	iteracion=1;
	
	do{
		if(iteracion>max_iteraciones){
			converge=false;//se sobrepaso la maxima cantidad de iteraciones permitidas.
			break;
		}else{
			x1=x0-f(x0)/f_derivada(x0);//calculo de la siguiente aproximacion
			error=fabs(x1-x0);//el error es la diferencia entre dos aproximaciones sucesivas
			
			//se imprimen los valores de la siguiente aproximacion x1,f(x1),f_derivada(x1),error.
			cout<<"\a";
			Sleep(500);
			cout<<"\n\nInteracion #"<<iteracion<<endl;
			cout<<"\nx"<<iteracion<<"	="<<x1<<"\n"<<"f(x"<<iteracion<<")	="<<f(x1)<<"\n"<<"f'(x"<<iteracion<<")	="<<f_derivada(x1)<<"\n"<<"error ="<<error<<endl;
			
			/*La diferencia entre dos aproximaciones sucesivas es tambien conocida como error
			La condicion de terminacion consiste en que el error debe ser <= que la tolerancia dada
			Si se cumple la condicion de terminacion, se a encontrado la raiz aproximada buscada.
			*/
			
			if(error<=tolerancia){//condicion de terminacion
				converge=true;
				break;
				
			//Si no se cumple el criterio de terminacion, se pasa a la siguiente iteracion.
			 
			}else{
				x0=x1;
				iteracion++;
			}	
		}
	}while(1);
	
	//Respuesta Final.
	cout<<"\a";
	Sleep(500);
	if(converge){
		cout<<"\n\nPara una Tolerancia de "<<tolerancia<<" La Raiz Aproximada de f es ="<<x1<<endl;
	}else{
		cout<<"\n\nSe Sobrepaso  la maxima cantidad de iteraciones permitidas"<<endl;
	}
}
