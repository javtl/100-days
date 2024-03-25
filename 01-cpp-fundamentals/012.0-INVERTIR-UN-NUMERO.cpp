#include<stdio.h>
#include<conio.h>
#include <iostream>
int main(){
    int numero;
        printf("introduce un numero: ");
        scanf("%d",&numero);
        printf("\n numero invertido: ");
        do{
            printf("%d", numero%10);

            numero/=10;
        }while(numero != 0);

        return 0;
        getch();
}