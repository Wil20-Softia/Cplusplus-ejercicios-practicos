#include <iostream>
#include <cstring>
using namespace std;

void simulador_torneo(int v[],string n[],int a){
	
	int j=a-1;
	cout<<"\t\t\t\tELIMINATORIAS:\n"<<endl;
	for(int i=0;i<a/2;i++){
		cout<<"\t\t\tJuego "<<i+1<<":\n"<<endl;
		cout<<"\t\tParticipante #"<<i+1<<" / ID: "<<v[i]<<" / Nombre: "<<n[i]<<"\n\n\t\t\t\tVS\n\n";
		cout<<"\t\tParticipante #"<<j+1<<" / ID: "<<v[j]<<" / Nombre: "<<n[j]<<endl;
		j--;
		cout<<"\n\n"<<endl;
	}
	
	cout<<"\n\n"<<endl;
}

void d_sf_f(string a[],string ced[],int v[],int b,int c,int f){
	
	int jn,i=0,k=c-1,j;
	string gn[c/b];
	string gcn[f/b];
	string gc[c/b];
	string gcc[f/b];
	int gv[c/b];
	int gcv[f/b];
	int ni[c/b];
	int m[f/b];
	
	while(i<c/b){
		
		do{
			cout<<"\n\t\tIndique quien gano en el Juego Numero: "<<i+1<<endl;
			cout<<"\tParticipante #"<<c-k<<" o Participante #"<<c-i<<endl;
			cout<<"\n\t\tPARTICIPANTE #"; cin>>jn;
			if(jn==c-k || jn==c-i){
				if(jn==c-i){
					cout<<"Participante #"<<c-i<<" Pasa a las Semifinales.\n"<<endl;
					gn[i]=a[c-i-1];
					gv[i]=v[c-i-1];
					gc[i]=ced[c-i-1];
					ni[i]=c-i;
				}
				else if(jn==c-k){
					cout<<"Participante #"<<c-k<<" Pasa a las Semifinales.\n"<<endl;
					gn[i]=a[c-k-1];
					gv[i]=v[c-k-1];
					gc[i]=ced[c-k-1];
					ni[i]=c-k;
				}	
			}
			if(jn!=c-k && jn!=c-i)
				cout<<"\t\t\t\tDisculpe. Ese Participante no esta en el juego"<<endl;
		}while(jn!=c-k && jn!=c-i);
		k--;
		i++;
	}
	
	if(b==2 && c==8){
		cout<<"\n\n\t\t\t\tSEMIFINALES:\n"<<endl;
		for(i=0;i<c/(b*2);i++){
			cout<<"\t\t\tJuego "<<i+1<<":\n"<<endl;
			cout<<"\t\tParticipante #"<<ni[i+i]<<" / ID: "<<gv[i+i]<<" / Nombre: "<<gn[i+i]<<"\n\n\t\t\t\tVS\n\n";
			cout<<"\t\tParticipante #"<<ni[i+i+1]<<" / ID: "<<gv[i+i+1]<<" / Nombre: "<<gn[i+i+1]<<endl;
			cout<<"\n\n"<<endl;
		}
	}
	i=0;
	while(i<f/b){
		
		do{
			cout<<"\n\t\tIndique quien gano en el Juego Numero: "<<i+1<<endl;
			cout<<"\tParticipante #"<<ni[i+i]<<" o Participante #"<<ni[i+i+1]<<endl;
			cout<<"\n\t\tPARTICIPANTE #"; cin>>jn;
			if(jn==ni[i+i] || jn==ni[i+i+1]){
				if(jn==ni[i+i+1]){
					cout<<"Participante #"<<ni[i+i+1]<<" Pasa a la Final.\n"<<endl;
					m[i]=ni[i+i+1];
					gcn[i]=gn[i+i+1];
					gcv[i]=gv[i+i+1];
					gcc[i]=gc[i+i+1];
				}
				else if(jn==ni[i+i]){
					cout<<"Participante #"<<ni[i+i]<<" Pasa a la Final.\n"<<endl;
					m[i]=ni[i+i];
					gcn[i]=gn[i+i];
					gcv[i]=gv[i+i];
					gcc[i]=gc[i+i];
				}	
			}
			else if(jn!=ni[i+i] && jn!=ni[i+i+1])
				cout<<"\t\t\t\tDisculpe. Ese Participante no esta en el juego"<<endl;
		}while(jn!=ni[i+i] && jn!=ni[i+i+1]);
		i++;	
	}
	
	cout<<"\n\n\t\t\t\tFINAL:\n"<<endl;
	cout<<"\t\t\t\tUltimo Juego.\n"<<endl;
	cout<<"\t\tParticipante #"<<m[0]<<" / ID: "<<gcv[0]<<" / Nombre: "<<gcn[0]<<"\n\n\t\t\t\tVS\n\n";
	cout<<"\t\tParticipante #"<<m[1]<<" / ID: "<<gcv[1]<<" / Nombre: "<<gcn[1]<<endl;
	cout<<"\n\n"<<endl;

	do{
		cout<<"\n\n\t\t\t\tQUE PARTICIPANTE ES EL GANADOR DEL TORNEO DE AJEDREZ?: ";
		cin>>jn;
		if(jn==m[0] || jn==m[1]){
			if(jn==m[0]){
				cout<<"\n\n\n\t\t\t\tFelicidades "<<gcn[0]<<" has ganado el Torneo de Ajedrez! "<<endl;
				cout<<"\n\t\t\tComo Ganador de la Competencia tus Datos seran Mostrado y Registrado Permanentemete."<<endl;
				cout<<"\n\tNombre de Usuario: "<<gcn[0]<<endl;
				cout<<"\tCedula de Identidad: "<<gcc[0]<<endl;
				cout<<"\tID del Torneo: "<<gcv[0];
			}else if(jn==m[1]){
				cout<<"\n\n\n\t\t\t\tFelicidades "<<gcn[1]<<" has ganado el Torneo de Ajedrez! "<<endl;
				cout<<"\n\t\t\tComo Ganador de la Competencia tus Datos seran Mostrado y Registrado Permanentemete."<<endl;
				cout<<"\n\tNombre de Usuario: "<<gcn[1]<<endl;
				cout<<"\tCedula de Identidad: "<<gcc[1]<<endl;
				cout<<"\tID del Torneo: "<<gcv[1];
			}
		}
		else if(jn!=m[0] && jn!=m[1])
				cout<<"\t\t\t\tDisculpe. Ese Participante No Quedo en la Final."<<endl;
	}while(jn!=m[0] && jn!=m[1]);
	
}

int main(){
	
	#define PART 8
	#define SF 2
	#define F 4
	int i;
	string nombre[PART];
	string cedula[PART];
	int ID[PART];
	cout<<"\t\t\tTORNEO DE AJEDREZ.\n\n"<<endl;
	for(i=0; i<PART; i++){
		cout<<"\t\tPARTICIPANTE NUMERO: "<<i+1<<endl;
		cout<<"\tIngrese el Nombre: "; cin>>nombre[i]; cout<<endl;
		cout<<"\tIngrese la Cedula: "; cin>>cedula[i]; cout<<endl;
		ID[i]=(i+5)*32;
		cout<<"\tSu ID es: "<<ID[i]<<endl;
		cout<<"\n\n"<<endl;
	}
	
	simulador_torneo(ID,nombre,PART);
	d_sf_f(nombre,cedula,ID,SF,PART,F);
	
	cout<<"\n\n\t\t\tADIOS. SIGUE TENIENDO EXITOS..."<<endl;
	
	cout<<"\n\n"<<endl;
	system("PAUSE");
	return 0;
}
