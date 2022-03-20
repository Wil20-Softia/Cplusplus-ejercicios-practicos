#include <iostream>
#include <string>
#include <map>

using namespace std;

//typedef: nos permite definir un determinado tipo asignandole un alias.
typedef pair<int,string> par;
typedef map<int,string> nombres;

int main(){
	
	/*
	Con la libreria map podemos crear array asociativos, este tipo de arrays tiene en particular
	en que sus elementos van asociados a traves de una determinada clave y no de un modo indexado
	como un array tradicional, map tambien nos proporciona una serie de herramientas muy utilies
	para trabajar con este tipo de arrays.
	*/
	
	map<string,string> asociativo;
	asociativo["dog"] = "perro";
	asociativo["cat"] = "gato";
	asociativo["tortugle"] = "tortuga";
	asociativo["elephant"] = "elefante";
	asociativo["lion"] = "leon";
	
	//Acceder al valor de un determinado elemento.
	cout<<asociativo["lion"]<<endl;
	
	//Acceder a todos los elementos del array mostrando clave => valor.
	map<string,string>::iterator iter;
	
	for(iter = asociativo.begin(); iter != asociativo.end(); iter++){
		cout<<"Clave = "<<iter->first<<" :: Valor = "<<iter->second<<endl;
	}
	cout<<"\n\n"<<endl;
	nombres n;
	n.insert(par(1,"Wilson"));
	n.insert(par(2,"Daniel"));
	map<int,string>::iterator i;
	for(i = n.begin(); i != n.end(); i++){
		cout<<"Clave = "<<i->first<<" :: Valor = "<<i->second<<endl;
	}
	
	system("PAUSE");
	return 0;
}
