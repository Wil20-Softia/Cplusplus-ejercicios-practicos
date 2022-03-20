#include <iostream>

using namespace std;

/*
* Es legal usar nombres de matriz como punteros 
* constantes, y viceversa. Por lo tanto, * (balance + 4)
* es una forma legítima de acceder a los datos en balance [4].

* Una vez que almacena la dirección del primer elemento 
* en p, puede acceder a los elementos de la matriz 
* utilizando * p, * (p + 1), * (p + 2) y así sucesivamente.
*/

int main(){
 
    //un array con 5 elementos.
    double balance[5] = {1000.0, 2.0, 3.4, 17.0, 50.0};
    double *p;
    
    p = balance;
    
    //salida de cada valor de elemento de matriz.
    cout<<"Array a valores usando puntero."<<endl;
    
    for(int i = 0; i < 5; i++){
            cout<<"*(p + "<<i<<"): ";
            cout<<*(p + i)<<endl;
    }
    
    cout<<"Arreglo de valores usando balance como direccion."<<endl;
    
    for(int i = 0; i < 5; i++){
            cout<<"*(balance + "<<i<<"): ";
            cout<<*(balance + i)<<endl;       
    }
    
    for(int i = 0; i < 5; i++){
            cout<<"p["<<i<<"]: ";
            cout<<p[i]<<endl;       
    }

    system("PAUSE");
    return 0;
    
}
