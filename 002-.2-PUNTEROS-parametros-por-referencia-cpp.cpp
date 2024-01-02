//PARAMETROS POR REFERENCIA

#inlcude <iostream>
#include <conio.h>
using namespace std;
int main(){
	
	int n1,n2;
	
	cout<<"ingrese 2 numeros";
	cin>>n1>>n2;
	
	
	getch();
	return 0;
}

void valoresnuevos(int& xnum, int& ynum){
	
	
	cout<<"el primer numero es:"<<xnum<<endl;
	cout<<"el segundo numero es:"<<ynum<<endl;
}


