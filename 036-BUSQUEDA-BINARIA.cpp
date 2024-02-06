#include <iostream>

using namespace std;

int main(){
	
	int numeros[] = {1,2,3,4,5};
	
	int inferior,superior,mitad,dato;
	char bandera = 'F';
	
	dato=4;
	
	//algoritmo de la busqueda binaria
	inferior = 0;
	superior = 5;
	
	while(inferior<=superior){
		mitad = (inferior+superior)/2;
		
		if(numeros[mitad] == dato){
			
			band= 'V';
			break;
		}
		
		if(numeros[mitad] > dato){
			
			superior = mitad;
			mitad = (inferior+superior/2);
			
		}
		if(numeros[mitad] < dato){
			
			inferior = mitad;
			mitad = (inferior+superior)/2;
			
		}
	}
	if(bandera== 'V'){
		cout<<"el numero ha sido encontrado en la posicion "<<,itad<<endl;
		
	}else{
		
		cout<<"el numero no ha sido encontrado"<<endl;
	}
	
	getch();
	return 0;
}
