//CALCULADORA INTERES COMPUESTO:

#include <iostream>
using namespace std;
int main(){
	
	 int cf, ci, r, n, t;
	
	cout<<"ingresa los datos para la formula del interes compuesto"<<endl;
	cout<<"DATOS:\n";
	cout<<"capital inicial: ci\n";
	cout<<"capital final: cf\n";
	cout<<"capital interes: r\n";
	cout<<"tiempo: t\n";
	
	cout<<"ingrese el capital inicial: ";cin>>ci;
	
	cout<<"ingrese el interes: "; cin>>r;
	cout<<"ingrese el tiempo: "; cin>>t;
	
	cf=ci*(1+(r/n))^t;
	
	cout<<"El resultado es: "<< cf <<" euros"<<endl;
	
	
	return 0;
}
