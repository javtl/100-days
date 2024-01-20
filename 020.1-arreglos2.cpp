// EXPLICACION ARREGOS / VECTORES

#include <iostream>
#include <conio.h>
using namespace std;
int main(int argc, char** argv){

    int vector[5]={1,2,3,4,5,};
    int suma = 0;

    for (i=0; i<5; i++){
        suma = suma+ vector[i];
        cout<<" la suma de vectores es: "<<suma<<endl;
    }
    getch();
    return 0;
}