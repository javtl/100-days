//sentencia switch

#include <iostream>
#include <stdlib.h> 
using namespace std;

int main(){
	
	int i;
	
	cout<<"ingrese una vocal"; cin>>i;
	
	switch(i){
		
		case a: cout<<"has introducido la vocal a"; break;
		case e: cout<<"has introducido la vocal e"; break;
		case i: cout<<"has introducido la vocal i"; break;
		case o: cout<<"has introducido la vocal o"; break;
		case u: cout<<"has introducido la vocal u"; break;
		default: cout<<"no has introducido una vocal";
	}
	
	system("pause");
	return 0;
}
