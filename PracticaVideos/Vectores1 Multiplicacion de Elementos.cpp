#include <iostream>
using namespace std;

int main(){
	
	int mul[4]={2,4,6,8};
	int m=1;
	
	for(int i=0;i<4;i++){
		m*=mul[i];
	}
	
	cout<<"La multiplicacion de los elementos es: "<<m<<endl;
	
	cout<<"\n"<<endl;
	system("PAUSE");
	return 0;
}
