#include <iostream>
#include <cstdlib>
#include <cstime>
using namespace std;
int randomnumero(int min, int max){

    return min + (rand() %(max-min));
}
int main() {

    srand((unsigned)time(0));

        cout <<(rand()%6)+1<<endl;
        for(int i=0; i<6; i++){
            cout<<randomnumero(1,6)<<endl;
        }
    cout<<RAND_MAX<<endl;
    cout<<rand()<<endl;


    return 0;
}