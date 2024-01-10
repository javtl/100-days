//EJEMPLO ENCONTRAR EL MAYOR DE 2 NUMEROS

#inlcude <iostream>
#inlcude <conio.h>

using namespace std;

int encontrarmax (int x, int y);

int main(){
	
	int n1, n2;
	int mayor
	cout<<"ingrese 2 numeros";
	cin>>n1>>n2;
	
	encontrarmax(n1,n2);// retorna 5 por ejemplo
	
	mayor = encontrarmax;
	
	cout<<"el mayor de los 2 es"<<mayor<<endl;
	
	getch()
	return 0;
}

//definicon de funcion
int encontrarmax(int x, int y){
	
	int nummax;
	if(x>y){
		nummax = x;
		
	}
	else{
		nummax = y;
	}
	
	return nummax;
}
