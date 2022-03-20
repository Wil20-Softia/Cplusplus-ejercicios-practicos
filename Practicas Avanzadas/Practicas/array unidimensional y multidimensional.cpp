#include <iostream>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main(){
	
	//Array unidimensional.
	vector<string> uni;
	
	uni.push_back("gato");
	uni.push_back("perro");
	uni.push_back("chivo");
	
	//Accediendo a los elementos del array uni.
	for(int x=0; x < uni.size(); x++){
		cout<<"Indice = "<<x<<" :: Valor = "<<uni[x]<<endl;
	}
	
	cout<<"\n\n"<<endl;
	
	//Array multidimensional tipo int.
	int const padre = 2;
	int const hijo = 2;
	
	int arr[padre][hijo]={{2,4},{2,5}};
	
	//Accediendo a un elemento del array multidimensional.
	cout<<"Posicion 1,1 = "<<arr[0][0]<<endl; //2 2
	cout<<"Posicion 1,2 = "<<arr[0][1]<<endl; //4 5
	cout<<"Posicion 2,1 = "<<arr[1][0]<<endl; 
	cout<<"Posicion 2,2 = "<<arr[1][1]<<endl;
	
	//Accediendo a cada uno de los elementos.
	for(int i=0; i<padre; i++){
		cout<<"\t\tPadre: "<<i<<endl;
		for(int j=0; j<hijo; j++){
			cout<<"\tHijo: "<<arr[i][j]<<endl;
		}
		cout<<"\n"<<endl;
	}
	
	//Array multidimensional con map.
	map< int, map< int, string > > bidimensional;
	
	bidimensional[0][0] = "Cama";
	bidimensional[0][1] = "Almohada";
	bidimensional[1][0] = "Sabana";
	bidimensional[1][1] = "Ventilador";
	
	map< int, map< int, string > >::iterator iter;
	
	for(iter = bidimensional.begin(); iter != bidimensional.end(); iter++){
		cout<<"\t\tPadre = "<<iter->first<<" :: Hijos = "<<iter->second[0]<<" : "<<iter->second[1]<<endl;
	}
	
	system("PAUSE");
	return 0;
}
