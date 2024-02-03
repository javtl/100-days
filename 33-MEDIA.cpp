#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int n;
	int suma=0;
	cout<<"ingrese el numero de elementos:";
	cin>>n;
	int*  arreglo = new int[n];
	for(int i=0; i<n;i++){
		
		cout<<"ingrese el "<<i+1<<" elemento: ";
		cin>>arreglo[i];
	}
	
	for(int i=0;i<n;i++){
		
		suma += arreglo[i];
	}
	cout<<"la media es: "<<suma*1.0/n<<endl;
	getch();
	return 0;
}
