/*SENTENCIA IF
if(condicion);{instrucciones}

else{instrucciones}
SSENTENCIA IF ELSE
else{instrucciones} */

/*
VIDEO: https://www.youtube.com/watch?v=r5GbMsB0eOA
*/

#include <iostream>
using namespace std;
int main(){
	int numero, dato = 5;
	
	cout<<"ingresa un numero: ";
	cin>>numero;
	
	if(numero == dato){
		cout<<"el numero es 5.";
		else{
			cout<<"el numero es diferente a 5";
		}
	}
	
	return 0;
}
