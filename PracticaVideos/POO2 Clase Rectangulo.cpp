#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

class Rectangulo{
	private:
		double ancho;
		double largo;
	public:
		Rectangulo(double,double);
		void perimetro();
		void area();	
};

Rectangulo::Rectangulo(double _ancho, double _largo){
	ancho=_ancho;
	largo=_largo;
}

void Rectangulo::perimetro(){
	cout<<"El Perimetro del Rectangulo es= "<<2*(largo+ancho)<<endl;
}

void Rectangulo::area(){
	cout<<"El Area del Rectangulo es= "<<largo*ancho<<endl;
}

int main(){
	
	Rectangulo r1(10,6);
	
	r1.area();
	r1.perimetro();
	
	cout<<"\n"<<endl;
	system("PAUSE");
	return 0;
}


