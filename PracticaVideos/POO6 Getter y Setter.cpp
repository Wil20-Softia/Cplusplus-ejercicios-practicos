#include <iostream>
#include <cstring>
using namespace std;

class Punto{
	private://atributos
		int x,y;
	public://metodos
		Punto();//constructor
		//Metodo Setter: Asigna Valores a los atributos
		void setPunto(int,int);
		//Metodo Getter: Muestra los Valores asignados a los atributos.
		int getPuntoX();
		int getPuntoY();
};

Punto::Punto(){
	
}
//metodo setter
void Punto::setPunto(int _x,int _y){
	x=_x;
	y=_y;
}
//metodo getter
int Punto::getPuntoX(){
	return x;
}
//metodo getter
int Punto::getPuntoY(){
	return y;
}

int main(){
	
	Punto punto1;
	
	punto1.setPunto(10,15);
	
	cout<<"("<<punto1.getPuntoX()<<","<<punto1.getPuntoY()<<")"<<endl;
	
	cout<<"\n"<<endl;
	system("PAUSE");
	return 0;
}
