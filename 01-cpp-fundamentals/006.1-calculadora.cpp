//calculadora

#include <iostream>
#include<conio.h>

using namespace std;

int main(){
	
int op;	
int x1,x2,r;


	cout<<"***********************************************\n";
	cout<<"**********	CALCULADORA		******************\n";
	cout<<"**********	[1]-SUMA		******************\n";
	cout<<"**********	[2]-RESTA		******************\n";
	cout<<"**********	[3]-MULTIPLICACION	**************\n";
	cout<<"**********	[4]-DIVISION	******************\n";
	cout<<"***********************************************\n";
	
	cout<<"ingrese el digito de la operacion que quiere realizar: ";
	cin>>op;
	
	switch(op){
	 		case 1:
	 		cout<<"ingrese el primer numero: "; cin>>x1;
	 		cout<<"ingrese el segundo numero: "; cin>>x2;
	 			r=x1+x2;
	 		cout<<"el resultado es: "<<r<<endl;
	 		break;
	 		case 2:
	 		cout<<"ingrese el primer numero"; cin>> x1;
	 		cout<<"ingrese el segundo numero"; cin>> x2;
	 			r=x1-x2;
	 		cout<<"el resultado es: "<<r<<endl;
	 		break;
	 		case 3:
	 		cout<<"ingrese el primer numero"; cin>> x1;
	 		cout<<"ingrese el segundo numero"; cin>> x2;
	 			r=x1*x2;
	 		cout<<"el resultado es: "<<r<<endl;
			 break;	
	 		case 4:
			cout<<"ingrese el primer numero"; cin>> x1;
	 		cout<<"ingrese el segundo numero"; cin>> x2;
	 			r=x1/x2;
	 		cout<<"el resultado es: "<<r<<endl;
			break;
	}
	
	getch();
	return 0;
}
