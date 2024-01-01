/*
LA SENTENCIA SWITCH:
switch(expresion){
case 1 literal 1;:
instrucciones;
break;
case 2 literal 2;:
instrucciones;
break;
case 3 literal 3;:
instrucciones;
break;
case 4 literal 4;:
instrucciones;
break;

default:
conjunto de instrucciones;
break;
 }
*/

#include <iostream>
using namespace std;

int main(){
	int numero;
	cout<<"ingrese un numero entre 1 y 5";
	cin>>numero;
	
	switch(numero){
		
		
		case 1: cout<<"es el numero 1";
		break;
		case 2: cout<<"es el numero 2";
		break;
		case 3: cout<<"es el numero 3";
		break;
		case 4: cout<<"es el numero 4";
		break;
		case 5: cout<<"es el numero 5";
		break;
		deafult: cout<<"no es ningun numero";
		break;
	}
	return 0;
}
