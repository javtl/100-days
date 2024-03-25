//paso de parametros por referencia

#include <iostream>
#inlcude <conio.h>
using namespace std;

void valnuevo(int&, int&);

int main (){
	
	int num1, num2;
	
	cout<<"digite 2 numeros: ";
	cin<<num1<<num2;
    valnuevo(num1,num2);
	getch();
	return 0;	
}
 void valnuevo(int& xnum, int& ynum){
 	
 	cout<<"el valor del primer numero es: "<<xnum<<endl;
 	cout<<"el valor del segundo numero es: "<<ynum<<endl;
 }
