#include <iostream>
using namespace std;

int main(){
	
	int manu[3][3]={{12,34,56},{68,58,100},{1,2,3}};
	int k=0,h=0;
	cout<<"\t\t\tMatriz.\n"<<endl;
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cout<<"\t"<<manu[i][j];
		}
		cout<<"\n"<<endl;
	}
	
	cout<<"\n\t\t\tDiagonal Principal de la Matriz.\n"<<endl;
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			if(i==k&&j==h){
				cout<<"\t"<<manu[i][j];
			}else{
				cout<<"\t";
			}
		}
		cout<<"\n"<<endl;
		k++; 
		h++;
	}
	
	cout<<"\n"<<endl;
	system("PAUSE");
	return 0;
}
