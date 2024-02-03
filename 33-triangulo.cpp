#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

int main(){

	
	for(int i=0;i<7;i++)
	{
		for(int k=0; k<6-i;k++){
			cout<<" ";
		}
		for(int k=0;k<i*2+1;k++){
			cout<<"*"<<endl;
		}
		
	}
		
	getch();
	return 0;
}
