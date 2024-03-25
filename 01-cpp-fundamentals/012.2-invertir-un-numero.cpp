#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
    cout<<"<-----[INVERTIR UN NUMERO]----->"<<endl;
    int x, y=0;
    cout<<"NUMERO A INVERTIR -> ";
    cin>>x;
    while(x !=0){
        y=y*10+x%10;
        x = x/10;
    }
    cout<<endl;
    cout<<"el numero invertido es -> ";
    

    return 0;
}