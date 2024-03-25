/*
for(inicializacion;condicion;incremento)
*/

#include <iostream>
using namespace std;
int main(){
	int n;
	cout<<"introduce un valor para n";
	cin>>n;
	
	for(int i =1;i<=10; i=i+1){
		
		cout<<n<<"*"<<i<<"="<<n*i<<"\n";
	}
	return 0;
}
