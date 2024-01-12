//ESTRUCTURAS ANIDADAS

#include <iostream>
#include <conio.h>

struct direcciones{
    char direccion[30];
    char ciudad[20];
    char provincia[20];

};

struct empleado{
    char nombre[20];
    struct info_direccion dir_empleado;
    double salario;

}empleados[2]; //indica 2 estructuras de empleados

int main(){

for( int=0; i<2; i++){

    cout<<"ingrese su nombre:";
    cin.getline(empleados[i].nombre,20,'\n');

    cout<<"ingrese direccion: ";
    cin.getline(empleados[i].dir_empleado.direccion,30,'\n');


}
//impresion de datos
for( int=0; i<2; i++)
{
    cout<<"nombre"<<empleado[i].nombre<<endl;
    cout<<"direccion empleado "<<empleado[i].dir_empleado.direccion<<endl;

}
}
