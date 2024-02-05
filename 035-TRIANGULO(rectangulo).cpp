#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
int i;
int x;
int j=0;

cout<<"introduce la longuitud del triangulo: "; cin>>j;

for(i=1;i<=j;i++){

	
	for(x=1;x<=j;x++){
		
		cout<<" X ";
	}
	j=j-1;
	cout<<endl;
}

system("pause");
return 0;
}
