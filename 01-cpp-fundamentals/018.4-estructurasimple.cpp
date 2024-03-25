#include <iostream>
using namespace std;

struct coches{
    char marca[20];
    char modelo[20];
    int numerodeseries;

}coche1 = {"honda", 745654},
coche2 = {"audi", 765849},
coche3 = {"ford",658542};

main(){
    cout<<"\tAutos"<<endl;
    cout<<"auto1"<<endl;
    cout<<"marca: "<<coche1.marca<<endl;
    cout<<"numero de serie"<<coche1.numerodeserie

    return 0;
}