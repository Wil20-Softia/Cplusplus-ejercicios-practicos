/*Escribir un programa que muestre una lista de los 100 primeros
numeros primos*/

#include <iostream>
using namespace std;

int main()
{
	int numeros=1, i=1, cont=0, cont1;
	
	while( cont < 100 )
	{
		cont1 = 0;
		
		for(int j=1;j<=numeros;j++)
		{
			if(numeros%j==0)
			{
				cont1++;
			}	
		}
		
		if(cont1==2)
		{
			cont++;
			cout<<" Numero Primo "<< cont <<" = "<< numeros<<endl;
		}
		
		numeros++;
	}
	
	system("PAUSE");
	return 0;
}
