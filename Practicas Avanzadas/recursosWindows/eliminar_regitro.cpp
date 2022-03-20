#include <iostream>
#include <windows.h>
#include <stdio.h>
#include <tchar.h>
#include <strsafe.h>
#include <string.h>
#include <vector>

using namespace std;

bool eliminar_registros(){
	HKEY hKey = NULL;
	long lReturn = RegOpenKeyEx(HKEY_LOCAL_MACHINE, _T("SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run"), 0L, KEY_SET_VALUE, &hKey);
	if (lReturn == ERROR_SUCCESS){
	    lReturn = RegDeleteValue(hKey, _T("reget86"));
	    lReturn = RegCloseKey(hKey);
	}

	lReturn = RegDeleteKey(HKEY_LOCAL_MACHINE, _T("SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run\\reget86"));
	if(lReturn == ERROR_SUCCESS){
		return true;
	}
}

int  main(){
   if(eliminar_registros()){
   	cout<<"Se ha eliminado el registro"<<endl;
   }
   return 0;
}
