// arrays

#include <iostream>
using namespace std;

int main(){
	int dato[5];
	
	int i,n;
	cout<<"Ingresa el numero de elementos que va a tener el arreglo: ";
	cin>>n;
	
	for(i=0;i<n;i++){
		cout<<"ingresa el numero: ";
		cin>>dato[i];
	}
	dato[0];
	dato[1];
	dato[2];
	dato[3];
	dato[4];
	
	cout<<"\nRecorrido ascendente: "<<endl;
		for (int i=0; i<5; i++){
		
			cout<<"\t"<<dato[i]<<endl;
			}
		
	cout<<"\nRecorrido descendente: "<<endl;
		for(int i=4;i>=0; i--){
			cout<<"\t"<<dato[i]<<endl;
		}
		
	
	
	return 0;
}
