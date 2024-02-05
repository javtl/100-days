// Programa que dibuja un rectángulo formado por asteriscos, con un ancho y alto indicados por el usuario/a
 
#include <iostream>
using namespace std;
 
int main() 
{   
    cout << "Programa que dibuja un rectángulo formado por asteriscos, con un ancho y alto indicados por el usuario." << endl;

    int alto, ancho, fila, columna;
    cout << "Dime el ancho del rectángulo: ";
    cin >> ancho;
    cout << "Dime el alto del rectángulo: ";
    cin >> alto;
    
    for (fila=0; fila < alto; fila=fila+1)
    {
        for (columna=0; columna < ancho; columna=columna+1)
            cout << "*";
        cout << endl;
    }
     
    return 0;
}
