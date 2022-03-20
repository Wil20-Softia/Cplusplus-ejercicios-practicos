#include <windows.h>
#include <stdio.h>

LPSTR szClassName = "MiClase";
HINSTANCE hInstance;
LRESULT CALLBACK MyWndProc(HWND, UINT, WPARAM, LPARAM);

int WINAPI WinMain(HINSTANCE hInst, HINSTANCE hPrevInstance, LPSTR szCmdLine, int iCmdShow)
{
   WNDCLASS wnd;
   MSG msg;
   HWND hwnd;

   hInstance = hInst;

   wnd.style = CS_HREDRAW | CS_VREDRAW;
   wnd.lpfnWndProc = MyWndProc;
   wnd.cbClsExtra = 0;
   wnd.cbWndExtra = 0;
   wnd.hInstance = hInstance;
   wnd.hIcon = LoadIcon(NULL, IDI_APPLICATION); //icono por defecto
   wnd.hCursor = LoadCursor(NULL, IDC_ARROW);   //flecha de mouse por defecto
   wnd.hbrBackground = (HBRUSH)(COLOR_BACKGROUND+1);
   wnd.lpszMenuName = NULL;                     //sin menu
   wnd.lpszClassName = szClassName;

   if(!RegisterClass(&wnd))                     //registrando WNDCLASS
   {
       printf("Este programa requiere Windows\n");
       return 0;
   }

   hwnd = CreateWindow(szClassName,
                       "Titulo de la ventana",
                       WS_OVERLAPPEDWINDOW,
                       CW_USEDEFAULT, CW_USEDEFAULT,
                       CW_USEDEFAULT, CW_USEDEFAULT,
                       NULL, NULL,
                       hInstance, NULL);
   ShowWindow(hwnd, iCmdShow);              //muestra la ventana en la pantalla
   UpdateWindow(hwnd);             //se actualiza la ventana

   while(GetMessage(&msg, NULL, 0, 0))      //ciclo de mensajes
   {
       TranslateMessage(&msg);
       DispatchMessage(&msg);
   }
   return msg.wParam;
}

LRESULT CALLBACK MyWndProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
   switch(msg)
   {
       case WM_DESTROY:
           PostQuitMessage(0);
           return 0;
   }
   return DefWindowProc(hwnd, msg, wParam, lParam);
}
