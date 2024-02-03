#include <iostream>
#include <conio.h>

using namespace std;

int main(){

	int n,aux;
	cout<<"ingrese el numero de elementos: ";
	cin>>n;
	
	int arreglo[n];
	
	for(int i=0;i<n;i++){
		
		cout<<"ingrese el elementos:"<<i<<endl; cin>>arreglo[i];
	}
	
	//metoodo burbuja
	
	for(int j=0; j<n-1;j++){
		if(arreglo[j] > arreglo[j+1]){
		
			aux = arreglo[j];
			arreglo[j]=arreglo[j+1];
			arreglo[j+1]= aux;
		}
	}
	
	cout<<"\nla mediana es:";
	
	if(n%2 !=0){
		cout<<arreglo[n/2]<<endl;
		
	}
	else{
		
		cout<< (arreglo[n/2] + arreglo[(n/2)-1])<<endl;
	}

	getch();
	return 0;
}
