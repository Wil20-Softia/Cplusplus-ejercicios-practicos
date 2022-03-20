#include <iostream>
#include <vector>
#include <algorithm> //contiene la funcion for_each.
#include <string>

using namespace std;

void getValue(string value){
	cout<<value<<endl;
}

int main(){
	
	/*vector nos permite crear arrays unidimensionales de un determinado tipo, una de sus ventajas
	es que podemos utilizar los modificadores de la clase para ir cambiando el contenido del array*/
	
	vector<string> cadenas; //array definido de string de nombre cadenas.
	cadenas.push_back("uno"); //Permite agregar un elemento al final del array.
	cadenas.push_back("dos");
	cadenas.push_back("tres");
	
	//Funcion for_each es util para extraer los valores de los elementos de un array.
	for_each(cadenas.begin(), cadenas.end(), getValue);
	
	/*La sentencia goto nos permite saltar a otro punto del programa, este punto lo indicaremos
	a través de una etiqueta*/
	int saltar = 1;
	punto:
		cout<<"Salto "<<saltar;
		cin.get();
		saltar++;
		if(saltar <= 10)
			goto punto;
	
	system("PAUSE");
	return 0;
}
