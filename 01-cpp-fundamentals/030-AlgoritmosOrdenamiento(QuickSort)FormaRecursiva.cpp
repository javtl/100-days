#include <iostream>
#include <vector>

using namespace std;


int particion(vector<int>&array, int inicio, int final){
	
	int pivote = arreglo(inicio);
	int i= inicio + 1;
	for(int j=i; i<= final; i++){
		if(arreglo[j] < pivote){
		swap(arreglo[i],arreglo[j])	{
			i++
		}
		}
		swap(arreglo[inicio],arreglo[i-1]);
		return i-1;
	}
}
void quicksort (vector<int>&array, int inicio, int final){
	
	if(inicio < final){
		
			int pivote = particion(array,inicio,final);
			quicksort(array,inicio,pivote-1);
			quicksort(array,pivote+1,final);
	}
}

void imprimirArreglo(vector<int>arreglo){
	for(int i=0;i<arreglol.size();i++){
		cout<<arreglo[i]<<" ";
	}
	cout<<endl;
}
int main(){
	vector<int>arreglo={15,0,2,20,17,5};
	imprimirarreglo[arreglo];
	quicksort(arreglo,0,arreglo.size()-1);
	imprimirArreglo(arreglo);
	return 0;
}
