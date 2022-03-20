#include <iostream>
#include <cmath>
using namespace std;

#define PI 3.1416

void menu_areas(){
	cout<<"\t\tIngrese el numero de la opcion:\n\t1.Cuadrado\n\t2.Triangulo\n\t3.Rectangulo\n\t4.Circulo\n\t5.Salir"<<endl;
	cout<<"\n\t\t\t\t\t\tNumero: ";
}

long double cuadrado(long double a){
	return pow(a,2);
}

long double triangulo(long double base, long double altura){
	return (base*altura)/2;
}

long double rectangulo(long double base, long double altura){
	return base*altura;
}

long double circulo(long double radio){
	long double area;
	area=2*PI*pow(radio,2);
	return area;
}

void elaes(){
	cout<<"El area es = ";
}

int main(){
	
	long double altura, base, radio, lado, acum=0;
	int opc;
	char dec;
	
	cout<<"\t\t\tCALCULA EL AREA DE LAS FIGURAS GEOMETRICAS\n"<<endl;
	
	do{
		menu_areas();
		cin>>opc;
		
		cout<<"\n"<<endl;
		
		switch(opc){
			case 1:
				cout<<"Ingrese un lado del cuadrado: "; cin>>lado;
				elaes();
				cout<<cuadrado(lado)<<endl;
				acum+=cuadrado(lado);
				break;
			case 2:
				cout<<"Base = "; cin>>base;
				cout<<"Altura = "; cin>>altura;
				elaes();
				cout<<triangulo(base,altura)<<endl;
				acum+=triangulo(base,altura);
				break;
			case 3:
				cout<<"Base = "; cin>>base;
				cout<<"Altura = "; cin>>altura;
				elaes();
				cout<<rectangulo(base,altura)<<endl;
				acum+=rectangulo(base,altura);
				break;
			case 4:
				cout<<"Radio = ";cin>>radio;
				elaes();
				cout<<circulo(radio)<<endl;
				acum+=circulo(radio);
				break;
			default:
				goto fin;
		}
		
		cout<<"\n\tSi desea continuar presione S y sino presione N: ";
		cin>>dec;
		
	}while(dec=='S' || dec=='s');
	
	fin:
		cout<<"\n\t\tEl total de las areas calculadas es = "<<acum<<endl;
	
	cout<<"\n\n"<<endl;
	system("PAUSE");
	return 0;
}
