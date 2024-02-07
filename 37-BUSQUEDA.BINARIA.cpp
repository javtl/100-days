//determinar si un numero se encuentra en un vector 
//busqueda binariando
#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
int n,mitad,x,vector[] ={1,2,3,4,5,6,7,8,9,10};
    int primero = 0; // vale 0 posicion 0
    int ultimo = 9; // vale 9  posicion 9

    x = 0;

    cout<<"ingresa el numero a buscar: ";
    cin>>n;

    while(primero<= ultimo && x == 0)
    // mientras primero = 0 sea menor a ultimo = 9
    // se cumple el bucle 
    {
        mitad = (primero + ultimo) / 2;
        // calculamos la mitad 0+9/2= 4 (mitad)b
        if(n==vector[mitad]){
            // si el numero 3 es menor a la mitad =5 se cumple
        x = 1;}
        if (n < vector[mitad]) {
            // si el n = 3 es menor a la mitad se cumple 
            ultimo = mitad - 1;
        }
        if(n > vector[mitad]){
                primero= mitad + 1;
        }
        if(x == 1){

            cout<<"\nEl numero se encuentra en el vector";

        }
        else{
            cout<<"\nEl numero no se encuentra en el vector";
        }
    }


    return 0;
}
