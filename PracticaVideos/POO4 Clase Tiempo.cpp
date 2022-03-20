#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;

class Tiempo{
	private:
		int hora,min,seg;
	public:
		Tiempo(int,int,int);
		Tiempo(long);
		void muestraHora();
};

Tiempo::Tiempo(int _hora,int _min,int _seg){
	hora=_hora;
	min=_min;
	seg=_seg;
}

Tiempo::Tiempo(long segundos){
	int guar;
	seg=int(segundos%60);
	guar=int(segundos/60);
	min=guar%60;
	hora=guar/60;
}

void Tiempo::muestraHora(){
	cout<<"El Tiempo es: "<<hora<<":"<<min<<":"<<seg<<endl;
}

int main(){
	
	Tiempo t1(12,54,32);
	Tiempo t2(15645);
	
	t1.muestraHora();
	t2.muestraHora();
	
	cout<<"\n"<<endl;
	system("PAUSE");
	return 0;
}
