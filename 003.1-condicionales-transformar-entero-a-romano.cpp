//Cambiar un numero entero pero a romanos:
/*
M 100
D 500
C 100
L 50
X 10
V 5
I 1
*/
#include <iostream>
using namespace std;
int main(){
	int numero,und,dec,cent,mill;
	
	
	cout<<"ingrese un numero"; cin>>numero;
	
	und=numero%10; numero /=10;
	dec=numero%100; numero /=10;
	cent=numero%10; numero/=10;
	mill=numero%10; numero/=10;
	
	switch(mill){
		
		case 1: cout<<"M"; break;
		case 2: cout<<"MM";break;
		case 3: cout<<"MMM"; break;
		
	}
	switch(cent){
		
	case 1: cout<<"  " break;
	case2:cout<<"  " break;
	case 3: cout<<"  " break;
	case 1: cout<<"  " break;
	case 1: cout<<"  " break;
	case 1: cout<<"  " break;
	case 1: cout<<"  " break;
	case 1: cout<<"  " break;
	case 1: cout<<"  " break;
	case 1: cout<<"  " break;
	}
	return 0;
}
