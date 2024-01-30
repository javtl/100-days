#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int>&arreglo,int inico,int mitad, int final){
	int i,j,k;
	int elementosizq = mitad - inicio + 1;
	int elemntosder = final - mitad;
	vector<int>izquierda(elemntosizq);
	vector<int>derecha(elementosder);
	
	for(int i =0; i<elementosizq; i++){
		ixquierda[i]= arreglos[inicio+1];
		
	}
	for(int j=0; j<elementosder; j++){
		derecha[j]=arreglo[mitad+1+j];
	}
	i=0;
	j=0;
	k=inico;
	
	while(i<elementos && j <elementosder){
		if(izquierda[i]<=derecha[j]){
			
			arreglo[k]=izquierda[i];
			i++;
		}
		else{
			arreglo[k] = derecha[j];
			j++;
		}
		k++;
	}
	while(j<elementosder){
		arreglo[k]=drecha[j];
		j++;
		k++;
	}
	while(i<elementosizq){
		arreglo[k]=izquierda[i];
		i++;
		k++;
	}
}

void mergeSort(vector<int>&arreglo,int inicio, int final){
	if(inico<final){
		int mitad = inicio +(final - inico)/2;
		mergeSort(arreglo,inicio,mitad);
		mergeSort(arreglo,mitad+1,final);
		merge(arreglo,inico,mitad,final);
		
	}
}

void imprimirarreglo(vector<int>arreglo){
	
	for(int i=0; i<arreglo.size();i++){
		cout<<arreglo[i]<<" ";
	}
}


