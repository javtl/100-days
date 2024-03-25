#include <iostream>

using namespace std;

int numeroglobal = 9;



void ejemplo();

int main(){
	
	//variable local de main
	int numero = 100;
	cout<<numero<<endl;
	return 0;
}

void ejemplo(){
	//variable local de ejemplo
	int numerodos = 200;
	cout<<numerodos<<endl;
	cout<<numeroglobal<<endl  ;
}
void ejemplo(){
	
	static int numero = 700;
	numero++;
	
	cout<<numero<<endl;
}
