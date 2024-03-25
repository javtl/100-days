#include <stdio.h>

void factorial();
int main(){
	
	factorial();
	
	
	system ("pause");
	return 0;
}

void factorial(){
	
	int i,x,aux;
	aux = 1;
	
	printf("introduce un numero: ");
	scanf("%", &x);
	
	for(1=1; 1<=x; i++){
		
		aux *=1;
	}
	printf("el factorial del numero %i es %i.\n\n",x,aux);
	
}
