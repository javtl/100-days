#inlcude <stdio.h>

int main(){
	int max, contador =0;
	printf("cuantos holas quieres ver en pantalla? ");
	scanf("%d"&max);
	
	for( ; ; ){ //al no contener el for ningun parametro 
				// se convierte en un bucle infinito
		
		if(contador<max){
			
			printf("Hola \n");
			contador++;
		}
			else break;// sirve para parar el bucle si no se cumple 
						// if
			
	}
	return 0;
}
