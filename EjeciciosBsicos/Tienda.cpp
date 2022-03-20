#include <iostream>
using namespace std;

int main()
{
	long ac, ac1;
	int cantUnd;
	double desc, costUnt, montPa, m;
	char cond='s', cerrar='a';
	cout<<"                    CONTROL DE VENTA DE ARTICULOS"<<endl;
	ac1=0;
	while(cerrar=='a'){
		ac=0;
		cout<<"                         NUEVA VENTA"<<endl;
		while(cond=='s')
		{
			cout<<"                            VENTA:"<<endl;
			cout<< "     Ingrese La Cantidad de Articulos Vendidos"<<endl; 
			cin>> cantUnd;
			cout<< "     Ingrese el Precio Unitario del Articulo"<<endl; 
			cin>> costUnt;
			m=cantUnd*costUnt;
			if(cantUnd>=100){
				desc=m-(m*0.4);
			}
			if(cantUnd>=26 && cantUnd<=99){
				desc=m-(m*0.2);
			}
			if(cantUnd>=10 && cantUnd<=25){
				desc=m-(m*0.12);
			}
			if(cantUnd<10){
				desc=m;
			}
			ac+=desc;
			cout<<"          Total = " << desc<<endl;
			cout<<"     Teclee <<s>> para Continuar o <<f>> para Terminar Venta"<<endl;
			cin>> cond;
		}
		ac1+=ac;
		cout<<"          Monto a Pagar: "<<ac<<endl;
		cout<<"     Teclee <<s>> Para Continuar"<<endl;
		cin>> cond;
		cout<<"     Teclee <<a>> Para Abrir Nueva Venta o <<c>> para Cerrar Caja"<<endl;
		cin>>cerrar;
	}
	cout<<"          Total de Venta del Dia de Hoy: " << ac1 <<endl;
	system("PAUSE");
	return 0;
}
