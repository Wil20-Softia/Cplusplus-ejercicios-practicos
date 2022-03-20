/*Dado un mes del año y el dia de la semana en que comienza, escriba
un programa que muestre por pantalla la representacion del calendario
correspondiente a dicho mes.*/


#include <iostream>
using namespace std;

int funcion_mes(int mes){
	if(mes==1 || mes==3 ||mes==5 || mes==7 || mes==8 ||mes==10 || mes==12){
		return 31;
	}
	else if(mes==4 || mes==6 || mes==9 || mes==11){
		return 30;
	}
	else if(mes==2){
		return 29;
	}
}

void procedimiento_dia(int mes, int dia){
	
	for(int i=1;i<=funcion_mes(mes);i++){
			if(dia==1){
				cout<<i<<"\t";
				if(i==7 || i==7+7 || i==7+(7*2) || i==7+(7*3)){
					cout<<"\n";
				}	
			}else{
				if(dia==2){
					if(i==1){
						cout<<"\t";
					}
					cout<<i<<"\t";
					if(i==6 || i==6+7 || i==6+(7*2) || i==6+(7*3)){
						cout<<"\n";
					}
				}
				if(dia==3){
					if(i==1){
						cout<<"\t\t";
					}
					cout<<i<<"\t";
					if(i==5 || i==5+7 || i==5+(7*2) || i==5+(7*3)){
						cout<<"\n";
					}
				}
				if(dia==4){
					if(i==1){
						cout<<"\t\t\t";
					}
					cout<<i<<"\t";
					if(i==4 || i==4+7 || i==4+(7*2) || i==4+(7*3)){
						cout<<"\n";
					}
				}
				if(dia==5){
					if(i==1){
						cout<<"\t\t\t\t";
					}
					cout<<i<<"\t";
					if(i==3 || i==3+7 || i==3+(7*2) || i==3+(7*3)){
						cout<<"\n";
					}
				}
				if(dia==6){
					if(i==1){
						cout<<"\t\t\t\t\t";
					}
					cout<<i<<"\t";
					if(i==2 || i==2+7 || i==2+(7*2) || i==2+(7*3) || i==2+(7*4)){
						cout<<"\n";
					}
				}
				if(dia==7){
					if(i==1){
						cout<<"\t\t\t\t\t\t";
					}
					cout<<i<<"\t";
					if(i==1 || i==1+7 || i==1+(7*2) || i==1+(7*3) || i==1+(7*4)){
						cout<<"\n";
					}
				}
			}	
	}
}

void calendario(int mes, int dia){

	
	if(mes==1){
		cout<<"\t\tENERO:\n";
		cout<<"\nLun\tMar\tMie\tJue\tVie\tSab\tDom"<<endl;
		procedimiento_dia(mes,dia);
	}
	else if(mes==2){
		cout<<"\t\tFEBRERO:\n";
		cout<<"\nLun\tMar\tMie\tJue\tVie\tSab\tDom"<<endl;
		procedimiento_dia(mes,dia);
	}
	else if(mes==3){
		cout<<"\t\tMARZO:\n";
		cout<<"\nLun\tMar\tMie\tJue\tVie\tSab\tDom"<<endl;
		procedimiento_dia(mes,dia);
	}
	else if(mes==4){
		cout<<"\t\tABRIL:\n";
		cout<<"\nLun\tMar\tMie\tJue\tVie\tSab\tDom"<<endl;
		procedimiento_dia(mes,dia);
	}
	else if(mes==5){
		cout<<"\t\tMAYO:\n";
		cout<<"\tLun\tMar\tMie\tJue\tVie\tSab\tDom"<<endl;
		procedimiento_dia(mes,dia);
	}
	else if(mes==6){
		cout<<"\t\tJUNIO:\n";
		cout<<"\nLun\tMar\tMie\tJue\tVie\tSab\tDom"<<endl;
		procedimiento_dia(mes,dia);
	}
	else if(mes==7){
		cout<<"\t\tJULIO:\n";
		cout<<"\nLun\tMar\tMie\tJue\tVie\tSab\tDom"<<endl;
		procedimiento_dia(mes,dia);
	}
	else if(mes==8){
		cout<<"\t\tAGOSTO:\n";
		cout<<"\nLun\tMar\tMie\tJue\tVie\tSab\tDom"<<endl;
		procedimiento_dia(mes,dia);
	}
	else if(mes==9){
		cout<<"\t\tSEPTIEMBRE:\n";
		cout<<"\nLun\tMar\tMie\tJue\tVie\tSab\tDom"<<endl;
		procedimiento_dia(mes,dia);
	}
	else if(mes==10){
		cout<<"\t\tOCTUBRE:\n";
		cout<<"\nLun\tMar\tMie\tJue\tVie\tSab\tDom"<<endl;
		procedimiento_dia(mes,dia);
	}
	else if(mes==11){
		cout<<"\t\tNOVIEMBRE:\n";
		cout<<"\nLun\tMar\tMie\tJue\tVie\tSab\tDom"<<endl;
		procedimiento_dia(mes,dia);
	}
	else if(mes==12){
		cout<<"\t\tDICIEMBRE:\n";
		cout<<"\nLun\tMar\tMie\tJue\tVie\tSab\tDom"<<endl;
		procedimiento_dia(mes,dia);
	}

}

int main(){
	
	int mes,dia;
	
	cout<<"\t\t\tCALENDARIO DE UN MES.\n\n"<<endl;
	
	cout<<"Ingrese el Numero del Mes:\n";
	cout<<"1.Enero\n2.Febrero\n3.Marzo\n4.Abril\n5.Mayo\n6.Junio\n7.Julio\n8.Agosto\n9.Septiembre\n10.Octubre\n11.Noviembre\n12.Diciembre"<<endl;
	cin>>mes;
	cout<<"\n";
	cout<<"Ingrese el Numero del Dia en que Comienza el Mes:\n";
	cout<<"1.Lunes\n2.Martes\n3.Miercoles\n4.Jueves\n5.Viernes\n6.Sabado\n7.Domingo"<<endl;
	cin>>dia;
	cout<<"\n"<<endl;
	calendario(mes,dia);
	cout<<"\n\n"<<endl;
	system("PAUSE");
	return 0;
}

