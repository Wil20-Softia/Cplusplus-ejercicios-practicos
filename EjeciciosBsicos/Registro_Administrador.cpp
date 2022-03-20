/*Realice un programa que permita registrar a un administrador 
del sistema por medio del usuario y contraseña. Luego solicitar
el usuario y la contraseña para acceder a la pantalla del menu,
el usuario tendra 3 intentos para validarse como administrador,
sino lo logra el programa debe cerrarse.

	El menu permitira:
1.Registrar Clientes en un banco con el nombre, cd y numero de cuenta.
2.Mostrar por pantalla todos los clientes registrados.
3.Asignar un credito a un cliente.
4.Salir del sistema.

Un cliente no puede estar registrado 2 veces en la funcion,
asignar credito se debe mostrar por pantalla todos los datos
del acreditado, la funcion asignar credito debe ser usada una
sola ves en caso que el usuario vuelva a seleccionar se 
mostrara un mensaje por pantalla que el credito ya fue 
asignado.*/

#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

#define TAM 100

int tamanyo(string a){
	
	int i=0;
	
	while(a[i]!='\0'){
		i++;
	}
	
	return i;
}

int SumaDeElementos(string c){
	
	
	int vn[tamanyo(c)];
	int acum=0;
	for(int i=0;i<tamanyo(c);i++){
		vn[i]=int(c[i])-48;
	}
	
	for(int i=0;i<tamanyo(c);i++){
		acum+=vn[i];
	}
	
	return acum;
}

int MetodoBurbuja(int v[], int d){
	
	int aux;
	for(int j=0;j<d;j++){
		if(v[j]>v[j+1]){
			aux=v[j];
			v[j]=v[j+1];
			v[j+1]=aux;
		}
	}
	
	acreditado(j);
	
}

void acreditado(int a){
	
	cout<<"Nombre: "<<
}

void menu(){
	
	int n,i=0,cont,j;
	int vcredito[TAM];
	char dec,d;
	bool vl,bcred;
	string nombre[TAM],cedula[TAM],num_cuen[TAM];
	//int indice[TAM];
	cout<<"\n\n\t\t\tBIENVENIDO AL MENU DE ADMINISTRADOR:"<<endl;
	
	do{
		cout<<"\n\n\t1.Registro de Clientes\n\t2.Todos los Clientes Registrados\n\t3.Asignar Credito\n\t4.Salir del Sistema\n"<<endl;
		cout<<"Ingrese el Numero de la opcion que Desea: "; cin>>n;
	
		if(n==4){
			goto fin;
		}else if(n==1){
			
			cout<<"\n\n\t\t\tREGISTRO DE CLIENTES\n"<<endl;
			i=0;
			do{
				cout<<"\n\t\tCliente Numero "<<i+1<<endl;
				//indice[i]=i+1;
				cout<<"\tNombre: "; cin>>nombre[i];
				cout<<"\tCedula: "; cin>>cedula[i];
				if(i>0){
					
					do{
						j=i-1;
						cont=0;
						while(j>=0&&cont==0){
							if(cedula[i]==cedula[j]){
								cont++;
							}
							j--;
						}
						if(cont>0){
							cout<<"\n\n\t\t\tERROR.\n\tCedula ya Ingresada.\n"<<endl;
							cout<<"Ingrese la Cedula de Nuevo: "; cin>>cedula[i];
						}
					}while(cont>0);
				}
				vcredito[i]=SumaDeElementos(cedula[i]);
				cout<<"\tNumero de Cuenta: "; cin>>num_cuen[i];
				cout<<"\n\n\t\t\tContinuar preseione S y sino presione N: "; cin>>d;
				i++;
			}while(d=='S' || d=='s');
		}else if(n==2){
			cout<<"\t\tLos Clientes Registrados Son:";
			
			if(i==0){
				cout<<"\t\tNo hay clientes Registrados.\n\n"<<endl;
			}else if(i>0){
				for(int j=0;j<i;j++){
					cout<<"\n\n\tCliente #"<<j+1<<endl;
					cout<<"\n\tNombre: "<<nombre[j]<<endl;
					cout<<"\tCedula: "<<cedula[j]<<endl;
					cout<<"\tNumero de Cuenta: "<<num_cuen[j]<<endl;
				}
			}
			
		}else if(bcred==true && n==3){
			bcred=false;
			MetodoBurbuja(vcredito,i);
		}
		cout<<"\n\t\t\tVolver al Menu preseione S y sino presione N: "; cin>>dec;
	}while(dec=='S' || dec=='s');
	
	fin:
		cout<<" "<<endl;
}

void usuario(){
	
	string usu;
	string contra;
	string login,clave;
	bool decicion,decicion1;
	int i=0;
	
	cout<<"\t\t\tREGISTRO DE ADMINISTRADOR.\n"<<endl;
	cout<<"Registre su Nombre: "; cin>>usu;
	cout<<"Registre su Contraseña: "; cin>>contra;
	
	cout<<"\n\t\tPara Ingresar al Menu de Opciones Ingrese: "<<endl;
	
	do{
		cout<<"Usuario: "; cin>>login;
		cout<<"Contaseña: "; cin>>clave;
		
		if(usu==login){
			decicion=true;
		}else if(usu!=login){
			decicion=false;
		}
		if(contra==clave){
			decicion1=true;
		}else if(contra!=clave){
			decicion1=false;
		}
		
		if(decicion==false ||decicion1==false)
			cout<<"\n\tError de Registro\n\tVuelva a Ingresar los Datos para el Registro.\n"<<endl;
		if(decicion==true && decicion1==true)
			break; 
		i++;
		
	}while(i<3);
	
	if(i==3){
		cout<<"Exedio Los Intentos.\n"<<endl;
		goto fin;
	}
	
	if(decicion==true && decicion1==true){
		menu();
	}
	
	fin:
		cout<<" "<<endl;
}

int main(){
	
	usuario();
	cout<<"\n\t\t*****HASTA LUEGO*****\n"<<endl;
	cout<<"\n\n"<<endl;
	system("PAUSE");
	return 0;
}
