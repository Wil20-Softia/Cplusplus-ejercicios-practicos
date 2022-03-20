#include <windows.h>
 
LRESULT CALLBACK WindowsProc(HWND hwnd, UINT msg, WPARAM wParam, LPARAM lParam)
{
    switch(msg)                //Analizamos el mensaje que recibe como parametro la funci�n
    {
        case WM_PAINT:         //En caso que ocurra WM_PAINT
            HDC hDC;   //Creamos un dispositivo de contexto (para poder dibujar)
            //Contiene informaci�n que puede ser usada para pintar el �rea de cliente de una ventana por la propia aplicaci�n.
            PAINTSTRUCT ps;
            hDC = BeginPaint(hwnd, &ps);  //Prepara la ventana para dibujar sobre ella
            RECT  rectangulo;      //Creamos un rectangulo en la ventana para dibujar sobre el
            GetClientRect(hwnd, &rectangulo);   //Agregamos el rectangulo a la ventana
            //Funci�n que dibuja un texto sobre el rectangulo creado
            DrawText(hDC,                                   //Identificador del dispositivo de context
                     "Hola Mundo!!!!!",                     //Texto a dibujar en pantalla
                     -1,                                    //Dejamos que la funci�n ajuste automaticamente el tama�o del texto.
                     &rectangulo,                            //Direcci�n del rectangulo donde se dibujar� el texto
                     DT_SINGLELINE | DT_CENTER | DT_VCENTER  //Formato del texto (una sola linea centrada horizontal y vericalmente)
                     );
            EndPaint(hwnd, &ps);        //Termina el proceso de dibujo en la ventana
        break;
 
        case WM_DESTROY:          //En caso que ocurra WM_DESTROY
            PostQuitMessage(0);  //Ocurre el mensaje WM_QUIT para terminar la aplicaci�n
            return 0;
        break;
    }
 
    //Esta funci�n procesa los mensajes no tratados por WindowsProc(), como redimensionar
    //la ventana, maximizarla, etc.. , es decir, hace lo predterminado sin alterar su funci�n
    return DefWindowProc(hwnd, msg, wParam, lParam);
}
 
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
    //1.-Especificar a Windows que tipo de ventana se requiere
    WNDCLASSEX miClase;   //Creamos la variable miClase tipo WNDCLASSEX
 
    miClase.cbSize = sizeof(WNDCLASSEX); //Tama�o de la clase es igual al tama�o de la estructura
    miClase.style = CS_HREDRAW | CS_VREDRAW; //Redibuja la ventana si cambia su tama�o
    miClase.lpfnWndProc = WindowsProc; //Define la funci�n que procesa los mensajes
    miClase.cbClsExtra = 0;   //No reservamos bytes extra despues de la clase
    miClase.cbWndExtra = 0;   //No reservamos bytes extra despues de la instancia
    miClase.hInstance = hInstance;   //Manejador de la instancia
    miClase.hIcon = LoadIcon(0, IDI_APPLICATION); //Ajusta el icono por default de un programa windows
    miClase.hCursor = LoadCursor(0, IDC_ARROW);  //Ajusta el cursor por default de un programa windows
    miClase.hbrBackground = (HBRUSH)(COLOR_WINDOW); //El pincel ajusta el color de fondo de la ventana
    miClase.lpszMenuName = 0;  //No tiene barra de men�
    miClase.lpszClassName = "claseVentana";  //Ajusta el nombre de la clase
    miClase.hIconSm = 0;  //Ajusta el icono peque�o igual que el icono de la aplicaci�n
 
    RegisterClassEx(&miClase);  //Registra la clase de ventana para poder ser usada...
 
    //2.-Crear la ventana
    HWND hWnd;  //Variable tipo manejador de ventana, donde se guardara el manejador de la ventana creada.
 
    hWnd = CreateWindow("claseVentana",                                 //Nombre de la clase utilizada para esta ventana
                        "Ventana creada en C++ con la API de Windows",  //Titulo de la ventana
                        WS_OVERLAPPEDWINDOW,                            //Estilo de la ventana
                        1,                                            //Posici�n Horizontal en pixeles
                        300,                                            //Posici�n vertical en pixeles
                        640,                                            //Ancho de la ventana en pixeles
                        480,                                            //Alto de la ventana en pixeles
                        0,                                              //Sin ventana padre
                        0,                                              //Sin men�
                        hInstance,                                      //Instancia actual de la aplicaci�n
                        0);                                             //Sin datos extra para la creaci�n de la ventana
 
    ShowWindow(hWnd, nCmdShow);   //Muestra la ventana en pantalla
 
    //3.-Inicializar la ventana
 
    UpdateWindow(hWnd);
 
    //4.-Manejar los mensajes (se envian a WindowsProc() conforme vaya siendo necesario
    MSG mensaje;
    while(GetMessage(&mensaje,0,0,0) == TRUE)     //Obtiene cualquier mensaje
    {
        TranslateMessage(&mensaje);               //Traduce el mensaje
        DispatchMessage(&mensaje);                //Envia el mensaje a WindowsProc()
    }
 
    return mensaje.wParam;                      //Fin, regresa el control a Windows
 
}
