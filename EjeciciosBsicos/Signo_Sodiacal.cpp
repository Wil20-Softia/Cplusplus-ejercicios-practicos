/*Realizar un programa que permita selecciona un mes del año y agregar un día para que me imprima el signo.*/

#include <iostream>
using namespace std;

void signo_mes(int m, int d){
	
		switch(m){
		case 1:
			if(d>=1 && d<=21){
				cout<<" Su Signo es Capricorno"<<endl;
			}else if (d>=22 && d<=31){
				cout<<" Su Signo es Acuario"<<endl;
			}
			break;
		case 2:
			if(d>=1 && d<=19){
				cout<<" Su Signo es Acuario"<<endl;
			}else if (d>=20 && d<=29){
				cout<<" Su Signo es Piscis"<<endl;
			}
			break;
		case 3:
			if(d>=1 && d<=22){
				cout<<" Su Signo es Piscis"<<endl;
			}else if (d>=23 && d<=31){
				cout<<" Su Signo es Aries"<<endl;
			}
			break;
		case 4:
			if(d>=1 && d<=22){
				cout<<" Su Signo es Aries"<<endl;
			}else if (d>=23 && d<=30){
				cout<<" Su Signo es Tauro"<<endl;
			}
			break;
		case 5:
			if(d>=1 && d<=22){
				cout<<" Su Signo es Tauro"<<endl;
			}else if (d>=23 && d<=31){
				cout<<" Su Signo es Geminis"<<endl;
			}
			break;
		case 6:
			if(d>=1 && d<=22){
				cout<<" Su Signo es Geminis"<<endl;
			}else if (d>=23 && d<=30){
				cout<<" Su Signo es Cancer"<<endl;
			}
			break;
		case 7:
			if(d>=1 && d<=22){
				cout<<" Su Signo es Cancer"<<endl;
			}else if (d>=23 && d<=31){
				cout<<" Su Signo es Leo"<<endl;
			}
			break;
		case 8:
			if(d>=1 && d<=22){
				cout<<" Su Signo es Leo"<<endl;
			}else if (d>=23 && d<=31){
				cout<<" Su Signo es Virgo"<<endl;
			}
			break;
		case 9:
			if(d>=1 && d<=22){
				cout<<" Su Signo es Virgo"<<endl;
			}else if (d>=23 && d<=30){
				cout<<" Su Signo es Libra"<<endl;
			}
			break;
		case 10:
			if(d>=1 && d<=22){
				cout<<" Su Signo es Libra"<<endl;
			}else if (d>=23 && d<=31){
				cout<<" Su Signo es Escorpion"<<endl;
			}
			break;
		case 11:
			if(d>=1 && d<=22){
				cout<<" Su Signo es Escorpion"<<endl;
			}else if (d>=23 && d<=30){
				cout<<" Su Signo es Sagitario"<<endl;
			}
			break;
		case 12:
			if(d>=1 && d<=22){
				cout<<" Su Signo es Sagitario"<<endl;
			}else if (d>=23 && d<=31){
				cout<<" Su Signo es Capricornio"<<endl;
			}
			break;
		default:
			cout<< "\n Opcion Incorrecta\n"<<endl;
	}

}

int main(){
	
	int mes, dia;
	
	cout<< "\t\tDice su signo sodiacal\n"<<endl;
	
	cout<<"Ingrese el numero del mes respectivo\n1.Enero\n2.Febrero\n3.Marzo\n4.Abril\n5.Mayo\n6.Junio\n7.Julio\n8.Agosto\n9.Septiembre\n10.Octubre\n11.Noviembre\n12.Diciembre"<<endl;
	cin>> mes;
	cout<< "Ingrese el Numero del dia en que nacio"<<endl;
	cin >> dia;
	
	signo_mes(mes, dia);
	
	system ("pause");
	return 0;
	
}
