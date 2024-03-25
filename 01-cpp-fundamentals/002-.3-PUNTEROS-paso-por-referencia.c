//intercamvio de valores de una variable por una funcion

#include <stdio.h>

int main(){
	
	//ejemplo
/*	int x, *y;
	
	x=4;
	y=&x;
	
	printf("el valor de *y es %i\n\n", *y);
	*/
	
	x=5;
	y=10;
	
	
	printf("el valor actual de x es i%\n\n, x,y");
	cambio(&x.&y);
	void cambio(int *b, int *b)
	{
		aux =*a; //se intercambian valores 
		*a=*b;
		*b=aux;
	}
	//comparten el mismo espacio de memoria
	

	system("pause");
	return 0;
}
