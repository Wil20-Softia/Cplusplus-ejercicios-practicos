#include <iostream>
#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <cstring>

using namespace std;

string allDrives;

string getRemovableDisk();
string direccion_extraible();

int main(){
	
 	while(1){
 		if(direccion_extraible() != ""){
 			cout<<direccion_extraible()<<endl;
		 }
	 }
    return 0;
}

string direccion_extraible(){
    string driveLetter = getRemovableDisk();
    string direccion = "";
	string termino = ":\\";
	while(direccion == ""){
		driveLetter = getRemovableDisk();
    	if(driveLetter != "0"){
       		direccion = driveLetter + termino;
    	}else{
    		direccion = "";
		}
		Sleep(500);
	}
	if(direccion != ""){
		return direccion;
	}
}

string getRemovableDisk(){
    string drive="0";

    char szLogicalDrives[MAX_PATH];
    DWORD dwResult = GetLogicalDriveStrings(MAX_PATH, szLogicalDrives);

    string currentDrives="";

    //cout << dwResult << endl;
    for(int i=0; i<dwResult; i++)
    {
        if(szLogicalDrives[i]>64 && szLogicalDrives[i]< 90)
        {
            currentDrives.append(1, szLogicalDrives[i]);

            if(allDrives.find(szLogicalDrives[i]) > 100)
            {
                drive = szLogicalDrives[i];
            }
        }
    }

    allDrives = currentDrives;

    return drive;
}
