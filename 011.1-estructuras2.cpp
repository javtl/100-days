//ESTRUCTURAS DE DATOS

#include <iostream>
#include <conio.h>

using namespace std;

struct libro{

string titulo;
string autor;
string color;


};

int main(){
libro primero;
primero.titulo="aprendiendo c++";
primero.autor="youtube";
primero.color="verde";
cout<<primero.titulo<<endl;

getch();
return 0;
}
 