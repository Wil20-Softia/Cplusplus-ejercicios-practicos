#include <windows.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

void Stealth()
{
 HWND Stealth;
 AllocConsole();
 Stealth = FindWindowA("ConsoleWindowClass", NULL);
 ShowWindow(Stealth,0);
}

int main()
{
  cout<<"Esta Sentencia es Visible.\n";
  Stealth(); //Oculta la Consola de Windows
  cout<<"Esta Sentencia no es Visible.\n";
  system("PAUSE"); //Aqui puedes llamar algun proceso o sentecia como system("start chrome.exe"), abrira google chrome de sorpresa.
  return EXIT_SUCCESS;
}
