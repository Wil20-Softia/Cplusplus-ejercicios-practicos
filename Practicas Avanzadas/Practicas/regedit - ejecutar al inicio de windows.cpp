#include <iostream>
#include <cstring>
#include <windows.h>

using namespace std;

int main(int argc, char *argv[]){
	
	HKEY * key;
	LPCTSTR ruta = TEXT("\\SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run\\");
	
	long status = RegOpenKey(HKEY_LOCAL_MACHINE,ruta,&key);
	
	if(status != 0){
		
		cout<<"\t No se puede abrir la clave"<<endl;
		
	}else{
		
		cout<<"Nombre de la Subclave: ";
		string subclave;
		getline(cin,subclave);
		
		cout<<"Valor de la Subclave: ";
		string valor;
		getline(cin,valor);
		
		LPCTSTR _subclave = TEXT(subclave.c_str());
		LPCTSTR _valor = TEXT(valor.c_str());
		
		long crear = RegSetValueEx(*key,_subclave,0,REG_SZ,(LPBYTE)_valor,strlen(_valor)*sizeof(char));
		
		if(crear != 0){
			
			cout<<"Ha ocurrido un error al crear la subclave"<<endl;
			
		}else{
			
			cout<<"La subclave se ha creado correctamente"<<endl;
			
		}
		
	}
	
	RegCloseKey(*key);
	
	system("PAUSE");
	return 0;
}
