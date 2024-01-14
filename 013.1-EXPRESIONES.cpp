#include <iostream>
#include <math.h>   // raiz sqrt
                    //elevacion numero pow()
using namespace std;
int main(){

        float x,y,resultado=0;

        cout<<"ingrese el valor de x:";cin>>x;
        cout<<"ingrese el valor de y: ";cin>>y;

        resultado = (sqrt(x))/(pow(y,2)-1);

        cout<<"el resultado de la ecuacion es: "<<resultado<<endl;
        
    return 0;
}