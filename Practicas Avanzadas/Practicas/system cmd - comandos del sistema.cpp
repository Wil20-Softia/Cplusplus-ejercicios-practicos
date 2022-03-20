#include <iostream>
#include <cstring>

using namespace std;

void cmd(){
	while(1){
		cout<<" Comando: ";
		string comando;
		getline(cin,comando);
		system(comando.c_str());
		if(comando == "exit" || comando == "EXIT"){
			break;
		}
	}
}

int main(){
	
	cmd();
	
	system("PAUSE");
	return 0;
}
