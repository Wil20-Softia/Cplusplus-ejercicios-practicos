#include <iostream>
#include <ctime>

using namespace std;

// Funci�n para generar y devolver n�meros aleatorios.
int* getRandom(){
     static int r[10];
     // poner la semilla
     srand((unsigned)time(NULL));
     for(int i = 0; i < 10; i++){
             r[i] = rand();
             cout<< r[i] <<endl;        
     }
     return r;
}

//Funci�n principal para llamar a la funci�n definida arriba.
int main(){
 
    //un puntero a un int.
    int* puntero;
 
    puntero = getRandom();
    
    for(int i = 0; i < 10; i++){
            cout<<"*(puntero + "<<i<<"): ";
            cout<<*(puntero + i)<<endl;
    }
    
    system("PAUSE");
    return 0;
}
