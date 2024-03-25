#include <iostream>
#include <time.h>
using namespace std;
int main(int argc, char){
srand(time(NULL));
    int num;

    int limite_inferior =1;
    int limite_superior =10;

    for(int i=0; i<=10; i++){

        num = limite_inferior + rand() % (limite_superior + 1 - limite_inferior);
        cout<<num<<endl;
        
    }

    return 0;
}