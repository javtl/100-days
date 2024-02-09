// paso de paarmetros tipo matriz

// elevar el cuadrado todos los elementos de una matriz

#include <iostream>
#include <conio.h>
using namespace std;

void mostrarmatriz(int m[][3],int,int);

int main(){
	
	const int filas = 2;
	const int col = 3;
	int m[filas][col] = {{1,2,3},{4,5,6}};
	
	mostrarmatriz(m,filas,col);
	
	getch();
	return 0;
}

void mostrarmatriz(int m[][3],int nfilas, int ncol){
	cout<<"mostrar matriz original:\n";
	for(int i=0; i<nfilas;i++){
		for(int j=0; j<ncol; j++){
			cout<<m[i][j]<<" ";
		}
	}
}

