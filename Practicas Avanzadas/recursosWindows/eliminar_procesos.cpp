#include <windows.h>
#include <iostream>
#include <stdlib.h>
#include <cstring>
#include <TlHelp32.h>
#include <tchar.h>

using namespace std;

int eliminar_proceso(char *pkill){
 
   HANDLE hProcess, hSnapshot;
   PROCESSENTRY32 ProcessEntry;
   BOOL moreproc = FALSE;
   int count = 1, fail = 0;
   char *pname;
 
  hSnapshot = CreateToolhelp32Snapshot(TH32CS_SNAPALL, 0);
  
   if(hSnapshot == (HANDLE)-1)
      return 1;
 
 ProcessEntry.dwSize = sizeof(ProcessEntry); // we need to set the size to work
  moreproc = Process32First(hSnapshot, &ProcessEntry); 
  
  while(moreproc) // if success it returns true
  {
     
    hProcess = OpenProcess(PROCESS_ALL_ACCESS, FALSE, ProcessEntry.th32ProcessID);
 
   if(hProcess == NULL)
    {
     moreproc = Process32Next(hSnapshot, &ProcessEntry);
     continue;
    }
    
      _strlwr(pkill); // lowercase the string
       _strlwr(ProcessEntry.szExeFile);
     
     
       pname = strrchr(ProcessEntry.szExeFile, '\\');// we do this cause under NT system it is only process name but in 9x it is full path 
   if(pname == NULL)
          pname = ProcessEntry.szExeFile;  
    else
       pname++;   
   
   if(!(strcmp(pkill, pname))) 
   {
      if(TerminateProcess(hProcess, 0xffffffff))     // kill process
        //cout <<"\nProcess " << "\"" << pname << "\"" << " (" << count << ") " << " was terminated."; 
    	fail = 0;
	else fail++;
       
      count++; 
   } 
     
    
    CloseHandle(hProcess);
       moreproc = Process32Next(hSnapshot, &ProcessEntry);
  
  
  }  // end while
 
  if(fail)
    return 1;
   else 
   return 0;  // success
 
}

int main(){
	
	char *proceso = "firefox.exe";
	
	if(KillProc(proceso) == 0){
		cout<<"Se Ha eliminado el proceso del Navegador Morzilla Firefox"<<endl;
	}
	
	system("PAUSE");
	return 0;
}
