//Estructura Basica "Aprendiendo a crear e imprimir estruturas".

#include <iostream>
#include <conio.h>

using namespace std;

//Declaracion de una estructura y sus campos. Representan a una Persona.
struct Persona{
	char nombre[20];
	int edad;
}persona
/*persona1 = {"Wilson",21}, //Se declaran las variables y se le asigna valores a los elementos de la
persona2 = {"Ana",22}*/;    //Estructura para cada variable, ya que, cada variable representa a una persona.

int main(){
	
	//Imprimir los valores de cada una de las variable creadas en la estructura.
	/*cout<<"Nombre1: "<<persona1.nombre<<endl;
	cout<<"Edad1: "<<persona1.edad<<endl;
	
	cout<<"\nNombre2: "<<persona2.nombre<<endl;
	cout<<"Edad2: "<<persona2.edad<<endl;*/
	
	//Para rellenar los datos a una variable de estructura y luego imprimirlos.
	cout<<"Digite su Nombre: "; cin.getline(persona.nombre,20,'\n');
	cout<<"Digite su Edad: "; cin>>persona.edad;
	cout<<"\n\nImprimiendo Datos:"<<endl;
	cout<<"Su Nombre es "<<persona.nombre<<" y tiene "<<persona.edad<<" Anyo de edad."<<endl;
	
	getch();
	return 0;
}
