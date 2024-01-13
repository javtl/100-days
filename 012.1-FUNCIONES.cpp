//ejemplo encontrar el mayor de 2 numeros

#include <iostream>
#include <conio.h>
using namespace std;
//prototipo de funcion 
int encontrarmax(int x,int y);
int main(){


    int n1,n2;
    int mayor;
    cout<<"ingrese 2 numeros";
    cin>>n1>>n2;
    if (x>y)
    {
        nummax = x;
    }
    else{
        nummax = y;
    }
    mayor = encontrarmax(n1,n2);
    cout<<"el mayor de los 2 numeros es: "<<mayor<<endl;
    getch();
    return 0;

}

//definicion de una funcion 

int encontrarmax(int x,int y){

}