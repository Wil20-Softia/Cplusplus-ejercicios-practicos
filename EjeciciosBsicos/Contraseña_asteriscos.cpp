#include <iostream>
#include <cstring>
#include <conio.h>
using namespace std;

int main(){
	
	char contrasenia[200];
	
	cout<<"CONTRASE"<<char(165)<<"A: ";
	
	int i=0;
	
	do{
		contrasenia[i] = (unsigned char)getch();
        if(contrasenia[i]!=8){	//INGRESANDO CARACTER A LA CADENA.
			cout<<"*";
			i++;
        }else if(i>0){ //ESTE CONDICIONAL ES PARA BORRAR LOS CARACTERES DE LA CADENA.
            cout << (char)8 << (char)32 << (char)8;
            i--; //AQUI BORRAMOS EL CARACTER QUE INGRESAMOS.
        }
        cout.flush();
		fflush(stdin);
    }while(contrasenia[i-1]!=13); // SI SE PRESIONA ENTER SE TERMINA LA CONTRASEÑA.

	contrasenia[i-1]='\n';
    cout << endl;
	
	cout<<"\n"<<endl;
	cout<<"LA CONTRASE"<<char(165)<<"A INGRESADA ES: "<<contrasenia<<endl;
	system("PAUSE");
	return 0;
}
