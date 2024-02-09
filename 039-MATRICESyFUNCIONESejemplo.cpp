#include <iostream> //matrices y funciones

void imprimirmatriz (int matriz[][2], int filas, int columnas){
	cout<<sizeof(matriz)std::endl;
	for (int i=0;i<filas;i++)
{
	for(int j=0; j<columnas; j++){
		cout<<matriz[i][j]<<" ";
		
	}
	cout<<;
}
}

int main(){
	int matriz[][2] ={2,3,4,5};
	cout<<sizeof(matriz);
	
	imprimirmatriz(matriz, 2, 2);
	
	return 0;
}

