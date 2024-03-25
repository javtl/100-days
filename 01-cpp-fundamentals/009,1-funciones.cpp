#include <iostream>

using namespace std;

int n1 =2;
int n2 =4;
int suma;
void funcion ()
{
	cout<<"funcion sin valor de retorno: "<<endl;
}
int suma (int a, int b)
{
	return (a)+(b);
}
int main()
{
	suma = sumar(n1, n2);
	cout<<suma<<endl;
	funcion();
	cin.get();
	return 0;
}
