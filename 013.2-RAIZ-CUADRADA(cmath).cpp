#include <stdio.h>
#include <math.h>

int main(){

    printf("calcula la raiz de un numero\n");
    printf("ingrese un numero: \n");
    float num;
    scanf("%i",&num);
    float h=0,0001, raiz = h;
    while(raiz*raiz < num){
        raiz +=h;
    }
    printf("\n%f",raiz);
    
}