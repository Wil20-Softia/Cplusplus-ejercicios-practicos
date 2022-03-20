#include <iostream>
#include <ctime>

using namespace std;

// Función para generar y devolver números aleatorios.
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

//Función principal para llamar a la función definida arriba.
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
