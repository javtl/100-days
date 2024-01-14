#include <stdio.h>
#include <conio.h>
#include<iostream>

using namespace std;
int main(){

    int arc[5];

    int mayor,menor;
    int x;
    //ciclo for para llenar un arreglo
    for(x=0;x<=4;x++){

        printf("ingrese un nuemro";
        scanf("%i",&arc[x]);
    }
    mayor=arc[0];
    menor=arc[0];

    for(x=0;x<=4;x++){

        if(arc[x]>mayor)
            if(arc[x]>mayor){
                mayor=arc[x];
            }
    }
    printf("\nEl mas grande %d",mayor);
}
