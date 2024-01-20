#include <iostream>
#include <conio.h>

using namespace std;
int main(){
    int n=5;//numero de filas y columnas del cuadrado


    for( int i=0; i<n ; i++){

        for(int j=0; j<n; j++){
            cout<<" * ";
        }
        cout<<"\n";
    }

    getch();
    return 0;
}
