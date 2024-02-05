#include <stdio.h>
#include <iostream>

using namespace std;
int main(void)
{
    int lineas;

    int i,j;
    cout<<("Ingresa la cantidad de lineas para el triangulo: ");
    cin>>lineas;
    
   
    for (i = 1; i <= lineas; i++)
    {
        
        for (j = 0; j < i; j++)
        {
            cout<<("*");
        }
        cout<<("\n");
    }
    return 0;
}
