#include <iostream>
#inlcude <conio.h>

using namespace std;

int numero=10;
int *puntero1; //* operador de indireccion
int main(){
	//operador de direccion
	puntero1=&numero;
	
	cout<<puntero1<<endl;
	getch();
	return 0;
}
