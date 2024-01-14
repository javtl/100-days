#include <iostream>
#include <conio.h>

using namespace std;
int main(){
        int numero[100],n,mayor=0;
        cout<<"ingrese un numero";
        cin>>n;
        for(int i=0;i<n;)i++){
            cout<<i+1<<"ingrese un numero: ";
            cin>>numero[i];
            // 1 2 4 10 5
            if (numero[i]> mayor){

                mayor = numero[i];//10
            }
            cout<<"\nEl mauor numero del arreglo es: "<<mayor<<endl;
            

    return 0;
    getch();
}