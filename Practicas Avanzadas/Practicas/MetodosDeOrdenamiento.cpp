#include <iostream>

using namespace std;

int* burbuja(int a[], int n){
     int aux = 0;
     for (int i = 2; i <= n; i++){
         for(int j = 0; j <= (n-i); j++){
                 if(a[j] > a[j+1]){
                         aux = a[j];
                         a[j] = a[j+1];
                         a[j+1] = aux;    
                 }    
         }    
     }
}

int* insercion(int a[], int n){
     int aux = 0, pos = 0;
     
     //recorre todos los indices del arreglo a ordenar
     for(int i = 0; i < n; i++){
             pos = i;      //indice del numero actual.
             aux = a[i];   //numero actual, que será verificado con los anteriores a él.
             
             //mientras los anteriores a él sean mayor, cada uno de ellos se corren a una posicion atras,
             //y se pasa al siguiente para verifiacar, hasta que encuetre el numero menor a él.
             while((pos > 0) && (a[pos-1] > aux)){
                      a[pos] = a[pos-1];
                      pos--; 
                      //cuando se encuentra el menor número a él "pos" queda en  el indice que le
                      //corresponde a el número actual.
             }
             //Se coloca el numero actual en el indice o posicion correspondiente a él.
             a[pos] = aux;
     }     
}

int main(){

    int arreglo[] = {8,5,9,7,6,1,3,2,23,54,24,14,65,87,64,45,34,78,89,4};
    int arreglo2[] = {6,5,3,1,8,7,2,4};
    int tam = sizeof arreglo / sizeof *arreglo;
    int tam2 = sizeof arreglo2 / sizeof *arreglo2;
    
    cout<<"\t\tArreglo desordenado (forma original): "<<endl;
    for(int i = 0; i < tam; i++){
            cout<<"\t\tarreglo["<<i<<"] = "<<arreglo[i]<<endl;        
    }
    
    burbuja(arreglo,tam);
    
    cout<<"\n\n\t\tArreglo ordenado (Metodo Burbuja): "<<endl;
    for(int i = 0; i < tam; i++){
            cout<<"\t\tarreglo["<<i<<"] = "<<arreglo[i]<<endl;        
    }
    
    cout<<"\n\n\t\tArreglo2 desordenado (forma original): "<<endl;
    for(int i = 0; i < tam2; i++){
            cout<<"\t\tarreglo2["<<i<<"] = "<<arreglo2[i]<<endl;        
    }
    
    insercion(arreglo2, tam2);
    
    cout<<"\n\n\t\tArreglo2 ordenado (Metodo Inserción): "<<endl;
    for(int i = 0; i < tam2; i++){
            cout<<"\t\tarreglo2["<<i<<"] = "<<arreglo2[i]<<endl;        
    }
    
    system("PAUSE");
    return 0;
}
