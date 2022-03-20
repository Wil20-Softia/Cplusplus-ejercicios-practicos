#include <iostream>
#include <string>
#include <vector>

using namespace std;

/*Una estructura de datos es un grupo de elementos de datos agrupados bajo un mismo nombre. Estos
*elementos de datos, conocidos como mienbros, pueden tener diferentes tipos y longitudes.
*/

struct grupo{
	int entero;
	string cadena;
	vector<string> arr;
};

int main(){
	
	//Objeto de una estructura de datos.
	grupo objeto;
	
	objeto.entero = 100;
	objeto.cadena = "Me llamo Wilson";
	objeto.arr.push_back("Uno");
	objeto.arr.push_back("Dos");
	objeto.arr.push_back("Tres");
	objeto.arr.push_back("Cuatro");
	objeto.arr.push_back("Cinco");
	
	cout<<"\t\tIMPRIMIENDO LOS VALORES DE LOS MIEMBROS DE LA ESTRUCTURA.\n"<<endl;
	cout<<"Entero = "<<objeto.entero<<endl;
	cout<<"Cadena = "<<objeto.cadena<<endl;
	cout<<"\n\t\tValores del Array de la Estructura."<<endl;
	for(int i=0; i<objeto.arr.size();i++){
		cout<<objeto.arr[i]<<" ";
	}
	cout<<"\n\n"<<endl;
	
	system("PAUSE");
	return 0;
}
