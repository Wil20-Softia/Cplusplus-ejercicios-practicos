#include <iostream>
#include <cmath>

using namespace std;

const int t=100;

int num;

#define BIN 2
#define OCT 8
#define HEX 16

void enunciado(char a){
	
	if(a=='b' || a=='B'){
		cout<<"\t\t\tCONVIERTE UN DECIMAL A BINARIO...\n"<<endl;
	}
	else if(a=='o' || a=='O'){
		cout<<"\t\t\tCONVIERTE UN DECIMAL A OCTAL...\n"<<endl;
	}
	else if(a=='h' || a=='H'){
		cout<<"\t\t\tCONVIERTE UN DECIMAL A HEXADECIMAL...\n"<<endl;
	}
}

void numero(char a){
	
	if(a=='b' || a=='B'){
		cout<<"\nN"<<char(163)<<"mero Binario: ";
	}
	else if(a=='o' || a=='O'){
		cout<<"\nN"<<char(163)<<"mero Octal: ";
	}
	else if(a=='h' || a=='H'){
		cout<<"\nN"<<char(163)<<"mero Hexadecimal: ";
	}
}

void sistema_n(int a,char b){
	
	int r,i=0,k=0,j;
	int A[t];
	int B[t];
	
	enunciado(b);
	
	cout<<"\nN"<<char(163)<<"mero Decimal: ";
	cin>>num;
	
	do{
		
		r=num%a;
		
		num=num/a;
		
		
		if(num>=0 && num<a){
			A[i]=r;
			i++;
			A[i]=num;
		}else{
			A[i]=r;
		}
		
		i++;
		
	}while(num>=a);
	
	numero(b);
	
	k=i;
	
	for(j=0;j<i;j++){
		k--;
		B[j]=A[k];
		if(B[j]>9 && B[j]<16 && a==16){
			if(B[j]==10){
				cout<<"A";
			}else if(B[j]==11){
				cout<<"B";
			}else if(B[j]==12){
				cout<<"C";
			}else if(B[j]==13){
				cout<<"D";
			}else if(B[j]==14){
				cout<<"E";
			}else if(B[j]==15){
				cout<<"F";
			}
		}else{
			cout<<B[j];
		}
	}
}

int main(){
	
	int o;
	char dec;
	cout<<"\t\t\t\t\tSISTEMA DE NUMERACION:\n"<<endl;
	cout<<"\t\tde Decimal a: Binario, Hexadecimal u Octal.\n"<<endl;
	
	do{
		cout<<"\n\n\t\t\t1.Decimal a Binario.\n\t\t\t2.Decimal a Hexadecimal.\n\t\t\t3.Decimal a Octal."<<endl;
		cout<<"\nIngrese el N"<<char(163)<<"mero Respectivo a la Conversi"<<char(162)<<"n: ";
		cin>>o;
		cout<<"\n"<<endl;
		if(o<0 || o>3){
			cout<<"Opci"<<char(162)<<"n Incorrecta."<<endl;
		}
		else if(o==1){
			sistema_n(BIN,'b');
		}
		else if(o==2){
			sistema_n(HEX,'h');
		}
		else if(o==3){
			sistema_n(OCT,'o');
		}
		cout<<"\n\nSi desea continuar S y sino N: "; cin>>dec;
	}while(dec=='s' || dec=='S');
	
	cout<<"\n\n\t\t\tAdios..."<<endl;
	cout<<"\n\n"<<endl;
	system("PAUSE");
	return 0;
}
