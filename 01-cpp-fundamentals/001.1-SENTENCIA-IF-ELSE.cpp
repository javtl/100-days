/*
VIDEO: https://www.youtube.com/watch?v=saYhHiR8gFM

 if (condicion)
{sentencia}
else
{sentencia}


OPERADORES:
== igual a
!= diferente a
> mayor que
>= mayor o igual que
< menor que
<= menor o igual que

OPERADORES LOGICOS:
&& Y (and)
|| O (or)
*/
#include <iostream.h>
#include <stdlib.h>
using namesoace std;
//pedir 3 cantidades y a+hacer un promedio
int main(){
float a,b,c, p;
cout<<"ingresar una calificacion";
cin>>a;	
cout<<"ingresar una calificacion";
cin>>b;	
cout<<"ingresar una calificacion";
cin>>c;	

p=(a+b+c)/3;

cout<<"tu promedio es de: "<<p<<endl;

if(p>=5){cout<<" la asignatura fue aprobada.";
}	

else{
	cout<<"la asignatura no fue aprobada";
}



return 0;
}
