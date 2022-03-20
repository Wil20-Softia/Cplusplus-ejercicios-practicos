 #include <iostream>
#include <iomanip> //setprecision
#include <cmath>

#define PRECISION 4
using namespace std;

void tabula(double a, double b);

double f(double x);

int main(){
	
	cout<< setprecision(PRECISION);
	
	cout<< "\nCalculo de las raices de una funcion aplicando el metodo de la biseccion\n";
	cout<< "\nIngrese el Intervalo Inicial [a,b]:"<<endl;
	
	double a, b, tolerancia;
	
	cout<<"\na = ";
	cin>> a;
	
	cout<<"b = ";
	cin>> b;
	
	tabula(a, b);//llamada a funcion.
	
	cout<< "\nEscoja el Intervalo Adecuado"<<endl;
	
	cout<< "\na = ";
	cin>>a;
	
	cout<<"b = ";
	cin>>b;
	
	double xr;
		
	if(f(a) * f(b) > 0){
		
		cout<<"\nNo Se Puede Realizar el Metodo de la Biseccion\n";
		cout<<"Porque f("<<a<< ") y f("<<b<< ") Tienen el Mismo Signo"<<endl;
	}else{
		
		cout<<"Tolerancia = ";
		cin>>tolerancia;
		
		cout<< "\na\tb\tx\tf(a)\t\tf(b)\t\tf(x)\n"<<endl;
		
		do{
			
			xr = (a + b) / 2.0;
			
			cout<< a << "\t" << b << "\t" << xr << "\t" << f(a) << "\t\t" << f(b) << "\t\t" << f(xr) << endl;
			
			if(abs(f(xr)) <= tolerancia){
				
				cout<<"\n\nPara una Tolerancia de " << tolerancia << " La Raiz de f es: " << xr <<endl;
				break;
			
			}else {
				if( f(xr) * f(a) > 0){
					a=xr;
				
				}else if( f(xr) * f(b) > 0){
					b=xr;
				}
			}
			
			
		}while(1);
	}
	
	cin.get();
	cin.get();
	return 0;
}

#define INTERVALOS 10

void tabula(double a, double b){
	
	int puntos = INTERVALOS + 1;
	
	double ancho = (b - a) / INTERVALOS;
	
	cout<< "\n\tx\tf(x)\n"<<endl;
	
	for(int i=0; i<puntos; i++){
		cout<< "\t" << a << "\t" << f(a) <<endl;
		a=a+ancho;
	}
}

double f(double x){
	
	return 10*exp(x/2)*cos(2*x)-4;
}
