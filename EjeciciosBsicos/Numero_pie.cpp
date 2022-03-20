/*Realizar un programa que lea un número en pies y calcule e imprima su equivalente en yardas, pulgadas, centímetros O metros según sea la opción que seleccione el usuario
1pie=12 pulgadas, 1yarda=3 pies, 1pulgada=2.54cm y 1metro=100cm.*/
#include <iostream>
using namespace std;

void pie_yarda(double n){
	
	int pie=3, yarda=1;
	cout << n << " Pies equivalen a "<< (n*yarda)/pie<< " Yardas"<<endl;
}

void pie_pulgadas(double m){
	
	int pie=1, pulgadas=12;
	cout << m << " Pies equivalen a "<< (m*pulgadas)/pie << " Pulgadas"<<endl;  
	
}

void pie_cm(double b){
	
	int pie=1, pulgadas=12, p=1;
	double cm=2.54, pul;
	pul = (b*pulgadas)/pie;
	cout << b << " Pies equivalen a "<< (pul*cm)/p<< " Centimentros"<<endl;
}

void pie_mts(double b){
	
	int pie=1, pulgadas=12, p=1, cm1=100, metro=1;
	double cm=2.54, pul, cem;
	pul = (b*pulgadas)/pie;
	cem = (pul*cm)/p;
	cout << b << " Pies equivales a "<< (cem*metro)/cm1<< " Metros"<<endl;
}

int main(){
	
	double num;//declaracion de numero.
	int opcion;
	
	cout<< "\t\tCalculo de un Numero, ingresado en Pie\n"<<endl;
	
	cout<<"Ingrese el numero de la opcion a la que desea convertir el numero\n1.Pie a Yarda\n2.Pie a Pulgadas\n3.Pie a Centimetros\n4.Pie a metros"<<endl;
	cin>> opcion;
	
	switch(opcion){
		case 1:
			cout<<"\nIngrese el numero\n"<<endl;
			cin>> num;
			
			pie_yarda(num);
			break;
		case 2:
			cout<<"\nIngrese el numero\n"<<endl;
			cin>> num;
			
			pie_pulgadas(num);
			break;
		case 3:
			cout<<"\nIngrese el numero\n"<<endl;
			cin>> num;
			
			pie_cm(num);
			break;
		case 4:
			cout<<"\nIngrese el numero\n"<<endl;
			cin>>num;
			
			pie_mts(num);
			break;
		default:
			cout<< "\n Opcion Incorrecta\n"<<endl;
	}
	
	system ("pause");
	return 0;
	
}
