#include <iostream>

using namespace std;
int main(){
	
	int contador;
	for(contador =1;contador <10; contador++){
		
		if(contador==5){
			break;
		}
		
		cout<<contador<<endl;
		
	}
	cout<<"se ha parado el programa por que contador es = a 5";
	
	return 0;
}
