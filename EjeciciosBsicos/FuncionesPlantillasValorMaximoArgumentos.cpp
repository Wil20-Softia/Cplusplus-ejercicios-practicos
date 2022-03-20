/*Escriba una plantilla de funcion llamada maximo() que devuelva el valor maximo de 3 argumentos
que se transmitan a la funcion cuando sea llamada. Suponga que los 3 argumentos seran del mismo tipo
de dato*/

#include <iostream>
#include <conio.h>

using namespace std;

template <class TIPOD>
TIPOD maximo(TIPOD x, TIPOD y, TIPOD z);

int main(){
	
	float dat1 = 5;
	float dat2 = 5.26;
	float dat3 = 5.254;
	
	cout<<"El valor maximo es igual a: "<<maximo(dat1,dat2,dat3)<<endl;;

	getch();
	return 0;
}

template <class TIPOD>
TIPOD maximo(TIPOD x, TIPOD y, TIPOD z){
	
	TIPOD max;
	
	if(x>y && x>z){
		max = x;
	}else{
		if(y>x && y>z){
			max = y;
		}else{
			max = z;
		}
	}
	
	return max;
}
