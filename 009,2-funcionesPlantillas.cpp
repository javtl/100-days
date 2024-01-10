//plantilla de funcion

	//ej sacar valor absoluto de un numero
	#include <iodtream>
	#inlcude <conio.h>
	using namespace std;
	
	//prototipo de funcion
	template <class tipod>
	 
	 void mostrarabs(tipod numero);
	 
	int main(){
		
		
		
		getch();
		return 0;
	}
	
	template <class tipod>
	 
	 void mostrarabs(tipod numero);{
	 if (numero<0){
	 	numero = numero * -1;
	 	cout<<"el valor absoluto del numero es: "<<numero;
	 }
	 }
