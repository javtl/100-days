#include <iostream>
#include <cmath>
#include <conio.h>

using namespace std;

int main(){
	
	int matriz_i[9]{1,2,3,4,5,6,7,8,9};
	int matriz_j[9]{1,2,3,4,5,6,7,8,9};
	
	int resultado1=0;
	
	cout<<matriz_i<<endl;
	cout<<matriz_j<<endl;
	
	for(i=0;i<9;i++){
		
		cout<<matriz_i[i]<<endl;
	}
	
	for(j=0;j<9;j++){
		
		cout<<matriz_j[j]<<endl;
	}
	
	cout<<resultado1<<endl;
	
	getch();
	return 0;
}
